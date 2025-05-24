#include <stdio.h>

int main(){

	int n;
	printf("Enter the number of terms: ");
	scanf("%d",&n);
	int t1=0,t2=1;
	int t3;
	if (n == 0){
		printf("Enter a positive number!!");
	}else if (n==1){
		printf("%d",t1);
	}else {
		printf("%d %d ",t1,t2);
		for (int i=3; i<=n; i++){
			t3=t1+t2;
			printf("%d ",t3);
			t1=t2;
			t2=t3;
		}printf("\n");
	}return 0;




}
