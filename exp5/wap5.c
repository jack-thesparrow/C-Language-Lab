//Find the average of two numbers

#include <stdio.h>
int main()	{
	float num1,num2;
	printf("Enter the first number: ");
	scanf("%f",&num1);
	printf("Enter the second number: ");
	scanf("%f",&num2);
	printf("The average of %3.2f and %3.2f is %3.2f",num1,num2,(num1+num2)/2);


	return 0;
}
