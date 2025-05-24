#include <stdio.h>

void swap(int *a,int *b){//call by reference
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	int num1,num2;
	printf("Enter the first number: ");
	scanf("%d", &num1);

	printf("Enter the second number: ");
	scanf("%d", &num2);
	
	printf("Before Swapping: %d %d\n",num1,num2);
	swap(&num1,&num2);
	printf("After Swapping: %d %d\n",num1,num2);
	


	return 0;
}
