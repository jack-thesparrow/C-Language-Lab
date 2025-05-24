#include <stdio.h>

int main(){
	printf("Linear Search\n");
	int size;
	printf("Enter the number of elements: ");
	scanf("%d",&size);
	
	int arr[size];
	for (int i=0; i<size; i++){
		printf("Enter the Element %d : ",i);
		scanf("%d",&arr[i]);
	}int count=0,num;
	
	printf("Enter the element you want to search: ");
	scanf("%d",&num);
	
	printf("The element is at indices: ");
	for (int i=0; i<size; i++){
		if (arr[i]==num){
			count++;
			printf("%d ",i);
			continue;
		}
	}printf("\n");
	if (count==0){
		printf("Element %d not found!!",num);
	}else {
		printf("Element %d was found %d times!!",num,count);
	}

	


	return 0;
}
