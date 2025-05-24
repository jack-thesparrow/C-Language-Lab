#include <stdio.h>

int main()	{
	int a, b;
	printf("Exp10: Get two integer numbers (a and b) and perform the bitwise operation on a by b, and print the result. Left shifr: a<<b Right shift: a>>b\n");

	printf("Enter a: ");
	scanf("%d",&a);
	printf("Enter b: ");
	scanf("%d",&b);
	//performing the bitwise operations
	
	printf("The left shift a<<b is %d", a<<b);
	printf("\nThe right shifta>>b is %d",a>>b);
	


	return 0;
}
