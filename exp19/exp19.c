#include <stdio.h>

int main(){
	int num1,num2;
	printf("Enter the first number: ");
	scanf("%d",&num1);

	printf("Enter the second number: ");
	scanf("%d",&num2);

	//Euclidean Algorithm
	int gcd,lcm,temp1,temp2;
	
	temp1=num1;
	temp2=num2;

	while (num2 != 0){
		int remainder = num1 % num2;
		num1 = num2;
		num2 = remainder;
	}gcd = num1;
	lcm = (temp1*temp2)/num1;
	printf("LCM: %d",lcm);



	return 0;
}
