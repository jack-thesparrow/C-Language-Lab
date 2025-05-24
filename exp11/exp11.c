#include <stdio.h>

int main(){
	printf("Check whether an integer is divisible by the other\n");
	int num1,num2;
	printf("Enter the first number: ");
	scanf("%d",&num1);
	printf("Enter the second number: ");
	scanf("%d",&num2);

	if (num1%num2==0){
		printf("%d is divisible by %d",num1,num2);
	}else{
		printf("%d is not divisible by %d",num1,num2);
	}




	return 0;
}
