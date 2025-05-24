#include <stdio.h>

int main(){

	printf("Factorial of a number!!\n");
	int num;
	printf("Enter a non-negative number: ");
	scanf("%d",&num);
	long long int factorial=1;
	if (num==0){
		factorial=1;
	}else{
		if (num>0){
			for (int i=num; i>0; i--){
				factorial*=i;
			}
		}else{
			printf("Enter an integer");
		}
	}printf("Factorial of %d = %lld",num,factorial);




	return 0;
}

