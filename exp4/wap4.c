#include <stdio.h>

int main()	{
	int num1,num2;
	int sum, difference,product,modulus;
	float quotient;
	printf("Enter the First Number: ");
	scanf("%d",&num1);
	
	printf("Enter the Second Number: ");
	scanf("%d",&num2);
	quotient = (float) num1/num2;
	printf("\nThe sum(+) of the two numbers is %3d\n",num1+num2);
	printf("The difference(-) of the two numbers is %3d\n",num1-num2);
	printf("The product(*) of the two numbers is %3d\n",num1*num2);	
	printf("The quotient(/) of the two numbers is %3.2f\n",quotient);
	printf("The remainder(%%) of the two numbers is %3d\n",num1%num2);

		


	return 0;
}
