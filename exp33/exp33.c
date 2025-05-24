#include <stdio.h>
#include <string.h>
int main(){
	
	char str1[100],str2[100],temp[100]="temp";
	printf("Enter the first string: ");
	fgets(str1,sizeof(str1),stdin);
	str1[strcspn(str1,"\n")]='\0';
	printf("The first string is: %s\n",str1);
	
	//copying one string to another
	strcpy(temp,str1);
	printf("Enter the second string: ");
	fgets(str2,sizeof(str2),stdin);
	str2[strcspn(str2,"\n")]='\0';
	printf("The second string is: %s\n",str2);

	printf("Concatenating!!\n");
	strcat(temp,str2);
	printf("After concatenating: %s\n",temp);
	
	if (strcmp(str1,str2)==0){
		printf("The two strings are same!!\n");
	}else {
		printf("The two strings are not the same!!\n");
	}



	return 0;
}
