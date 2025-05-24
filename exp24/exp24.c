#include <stdio.h>

int main(){
	int size;
	printf("Enter the number of elements: ");
	scanf("%d",&size);

	int arr[size];
	for (int i=0; i<size; i++){
		printf("Enter Element %d: ",i);
		scanf("%d",&arr[i]);
	}
	int max=arr[0];
	for (int i=0; i<size; i++){
		if (arr[i]>= max){
			max=arr[i];
		}
	}printf("Max: %d",max);


	return 0;
}
