#include <stdio.h>

int main()	{
	
	printf("Exp11: Get two numbers and check whether the first number is divisible by the second number or not.");

	int num1, num2;

	printf("\nEnter the first number: ");
	scanf("%d",&num1);
		
	printf("\nEnter the second number: ");
	scanf("%d",&num2);
	
	if (num1%num2 == 0){
		printf("Divisible");
	}
	else{
		printf("Not Divisible");
	}




	return 0;
}
