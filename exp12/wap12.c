#include <stdio.h>

int main()	{
	
	printf("Exp12: Perform one of the arithmetic operations (+,-,*,/,%%) based on user selection.\n\n");
	int num1,num2;
	int choice;
	printf("Enter the first number : ");
	scanf("%d",&num1);	

	printf("Enter the second number : ");
	scanf("%d",&num2);	
	
	printf("Available Arithmetic Operations:\n1.Addition(+)\n2.Subtraction(-)\n3.Multiplication(*)\n4.Division(/)\n5.Modulus(%%)\n");
	printf("\nEnter Your Choice(1 - 5) : ");
	scanf("%d", &choice);
	
	if (choice == 1 ){
		printf("\nAddition: %d",num1+num2);
	}
	else {
		if (choice == 2 ){
			printf("\nSubtraction : %d", num1-num2);
		}
		if (choice == 3 ){
			printf("\nProduct : %d",num1*num2);
		}
		if (choice == 4 ){
			printf("\nDivision : %1.2f ",(float) num1/num2);
		}
		if (choice == 5){
			printf("\nModulus : %d",num1%num2);
		}
	}

	return 0;
}
