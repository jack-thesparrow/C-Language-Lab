#include <stdio.h>

int main(){

	int size;
	printf("Enter the number of elements: ");
	scanf("%d",&size);
	int arr[size];
	int sum=0;
	for (int i=0; i<size; i++){
		printf("Enter Element 0 : ");
		scanf("%d",&arr[i]);
	}for (int j=0; j<size; j++){
		sum+=arr[j];
	}printf("Sum of array: %d",sum);

	return 0;
}
