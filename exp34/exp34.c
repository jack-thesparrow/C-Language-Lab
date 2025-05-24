#include <stdio.h>

int main(){
	printf(" Welcome To File Handling in C!!\n");
	printf("What do you want to do with file.txt?(r: for read\tw: for write)\nEnter your choice: ");
	char choice;
	scanf("%c",&choice);
	if (choice == 'r'){
		FILE *fptr;
		fptr = fopen("file.txt","r");
		if (fptr == NULL){printf("Unable to open the file!!");return 1;}
		char buffer[100];
		fgets(buffer,sizeof(buffer),fptr);
		printf("%s", buffer);
		fclose(fptr);
	}else if (choice == 'w'){
		char ch;
		printf("\"w\" will truncate the existing data. Proceed?: ");
		scanf(" %c",&ch);
		FILE *fptr;
		fptr = fopen("file.txt","w");
		if (fptr == NULL){printf("Error: Unable to locate file!");return 1;}
		getchar();
		char buffer[100];
		printf("Enter something to write: ");
		fgets(buffer,sizeof(buffer),stdin);
		fputs(buffer,fptr);
		fclose(fptr);
	}else{
		printf("Error: Invalid Choice!");
	}





	return 0;
}
