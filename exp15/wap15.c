#include <stdio.h>
int main()	{
	int num1,num2;
	int counter;
	printf("Exp15: Get two integers and print all the integers between them.\n\n");
	printf("Enter the first number: ");
	scanf("%d",&num1);

	printf("Enter the second number: ");
	scanf("%d",&num2);
	printf("The numbers between %d and %d are: ",num1,num2);
	for (counter = num1+1; (counter) < num2; counter++){
		printf("%d ",counter);
	}	
	printf("\n");





	return 0;
}
