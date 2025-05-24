#include <stdio.h>

int main(){

	char str[100];
	printf("Enter the string: ");
	fgets(str, sizeof(str), stdin);
	int count=0;
	while (str[count] != '\0'){
		count++;
	}
	if (count>0 && str[count-1] == '\0'){
		count--;
	}


	printf("Length : %d",count-1);
	

	return 0;
}
