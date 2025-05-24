#include <stdio.h>

int main(){
	
	int num,temp,rem,rev=0;

	printf("Enter the number: ");
	scanf("%d",&num);
	temp=num;
	while (temp!=0){
		rem= temp%10;
		rev= (rev*10)+rem;
		temp=temp/10;
	}if (num==rev){
		printf("Palindrome!\n");
	}else {
		printf("Not Palindrome!\n");
	}





	return 0;
}
