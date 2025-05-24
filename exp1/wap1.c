#include <stdio.h>
int main()	{
	float num1,num2,num3;

	printf("Enter the  first number: ");
	scanf("%f",&num1);
	printf("Enter the  second number: ");
	scanf("%f",&num2);
	printf("Enter the  third number: ");
	scanf("%f",&num3);

	printf("The sum of the numbers is %3.2f",num1+num2+num3);
	return 0;
}
