#include <stdio.h>

//gcd using Euclidean Algorithm
int gcd(int a,int b){
	while (b!=0){
		int temp=b;
		b=a%b;
		a=temp;
	}return a;
}
int lcm(int a,int b){
	return (a*b)/gcd(a,b);
}

	
	
int main(){
	
	int num1,num2;
	printf("Enter the first number: ");
	scanf("%d",&num1);

	printf("Enter the second number: ");
	scanf("%d",&num2);
	
	printf("GCD : %d\n", gcd(num1,num2));
	printf("LCM : %d\n", lcm(num1,num2));




	return 0;
}
