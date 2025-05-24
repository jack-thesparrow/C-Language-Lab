#include <stdio.h>

int main(){

	int rows;
	printf("Enter the number of rows: ");
	scanf("%d",&rows);

	for (int i=1; i<=rows; i++){
		for (int sp=1; sp<=rows-i; sp++){
			printf(" ");//one space
		}for (int st=1; st<=i; st++){
			printf("* ");//one space after *
		}printf("\n");
	}




	return 0;
}
