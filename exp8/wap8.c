#include <stdio.h>

int main()	{
	printf("Exp8: Find the largest of the three numbers.\n");

	float num1,num2,num3;
	float largest;
	printf("\nEnter the First Number: ");
	scanf("%f",&num1);

	printf("\nEnter the Second Number: ");
	scanf("%f",&num2);

	printf("\nEnter the Third Number: ");
	scanf("%f",&num3);

	if (num1>num2 && num1>num3)	{
		largest  = num1;
	}
	else	{
		if (num2>num3)
			largest = num2;
		else
			largest = num3;
	}
	printf("\nThe largest of the three numbers is %3.2f", largest);
	return 0;
}
