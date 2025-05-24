#include <stdio.h>

int main(){
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);
	for (int i=1; i<=10; i++){
		printf("%3d x %2d = %3d\n",num,i,num*i);
	}





	return 0;
}
