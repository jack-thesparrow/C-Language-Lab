#include <stdio.h>

void inputArr(int size,int arr[size]){
	for (int i=0; i<size; i++){
		printf("Enter Element %d : ",i);
		scanf("%d",&arr[i]);
	}
}
void compareArr(int size1,int size2, int arr1[size1],int arr2[size2]){
	if (size1 != size2){
		printf("The size of the two arrays are not equal!!\nHence<they are not same!!\n");
	}else {
		int count=0;
		for (int i=0; i<size1; i++){
			if (arr1[i]==arr2[i]){
				count++;
			}
		}if (count==size1){
			printf("The two arrays are same!!\n");
		}else {
			printf("The two arrays are not the same!!\n");
		}
	}
}


int main(){
	
	int size1,size2;
	
	printf("Enter the number of elements for the first array: ");
	scanf("%d",&size1);
	int arr1[size1];
	inputArr(size1,arr1);

	printf("Enter the number of elements for the second array: ");
	scanf("%d",&size2);
	int arr2[size2];
	inputArr(size2,arr2);

	compareArr(size1,size2,arr1,arr2);	





	return 0;
}
