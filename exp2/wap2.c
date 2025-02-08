#include <stdio.h>

int main()	{
	int num1,num2;
	int temp;
	printf("Enter the first number: ");
	scanf("%d",&num1);
	printf("Enter the second number: ");
	scanf("%d",&num2);
	//output before swapping
	printf("The numbers before swapping are: %d %d\n\n",num1,num2);

	//swapping
	temp = num1;
	num1 = num2;
	num2 = temp;

	//output after swapping
	printf("The numbers after swapping are: %d %d",num1,num2);
		





	return 0;
}
