#include <stdio.h>

unsigned long long int fact(int a){
	if(a<=1){
		return 1;
	}else {
		return a*fact(a-1);
	}
}

int main(){

	int num;
	printf("Enter a positive the number: ");
	scanf("%d",&num);
	if (num<0){
		printf("Factorial for negative numbers is undefined!!");
	}else{
		printf("Factorial: %llu",fact(num));
	}

	return 0;
}
