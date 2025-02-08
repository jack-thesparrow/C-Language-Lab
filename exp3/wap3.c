#include <stdio.h>

int main()	{
	
	float principle,rate;
	int time;

	printf("Enter the Principle Amount: ");
	scanf("%f",&principle);

	printf("Enter the Time Period: ");
	scanf("%d",&time);

	printf("Enter the Rate Of Interest: ");
	scanf("%f",&rate);

	printf("The Simple Interest Calculated is: %3.2f", (principle*time*rate)/100);







	return 0;
}
