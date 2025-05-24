#include <stdio.h>
void viewMatrix(int rows,int cols,int arr[rows][cols]){
	printf("Order of matrix: %d x %d\n",rows,cols);
	for (int i=0; i<rows; i++){
		for (int j=0; j<cols; j++){
			printf(" %4d ",arr[i][j]);
		}printf("\n");
	}printf("\n");
}

void addMatrix(int rows,int cols,int mat1[rows][cols],int mat2[rows][cols]){
	for (int i=0; i<rows; i++){
		for (int j=0; j<cols; j++){
			printf(" %4d",mat1[i][j]+mat2[i][j]);
		}printf("\n");
	}printf("\n");
}
			
 

int main(){

	printf("Addition Of Two Matrices!!\n");

	int mat1[4][3]={{11,22,33},{26,43,34},{37,49,52},{42,55,26}};
	printf("This is the first Matrix!!\n");
	viewMatrix(4,3,mat1);

	int mat2[4][3]={{12,23,34},{45,56,67},{78,89,90},{21,54,65}};
	printf("This is the second Matrix!!\n");
	viewMatrix(4,3,mat2);

	printf("The sum of the two matrices is: \n");
	addMatrix(4,3,mat1,mat2);

	return 0;
}
