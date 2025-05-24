//check whether a given number is positive or negative
#include <stdio.h>

int main()	{
	float num;
	printf("Exp6: Program to check whether a given number is positive or negative.\n");
	printf("\nEnter the number : ");
	scanf("%f",&num);
	if(num<0)	{
		printf("The given number is negative");
	}
	else	{
		if(num==0)
			printf("The number is Zero");
		else	
			printf("The number is positive");
	}


	return 0;
}
