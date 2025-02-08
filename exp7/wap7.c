//check whether a given number is even or not

#include <stdio.h>

int main()	{
	int num;
	printf("Exp7: A program to check whether a given number is even or not.\n");
	printf("Enter a number: ");
	scanf("%d",&num);
	if (num%2==0)	{
		printf("The given number is even.");
	}
	else	{
		printf("The given number is odd.");
	}


	return 0;
}
