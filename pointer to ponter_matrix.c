#include <stdio.h>
#include <stdlib.h>

void display(int **, int, int);
void accept(int **, int, int);

int main(){
	int **arr, i, col, row;
	
	printf("enter the row size:");
	scanf_s("%d", &row);
	printf("enter the column size:");
	scanf_s("%d", &col);

	arr = (int**)malloc(row*sizeof(int*));

	for (i = 0; i < row; i++){
		arr[i] = (int*)malloc(col*sizeof(int));
	}

	accept(arr, row, col);
	display(arr, row, col);
	
	for (i = 0; i < 3; i++){
		free(arr[i]);
	}
	free(arr);

	return 0;
}

void accept(int **a, int row, int col){
	int i, j;
	printf("enter the array element:\n");
	for (i = 0; i < row; i++){
		for (j = 0; j < col; j++){
			scanf_s("%d", &a[i][j]);
		}
		
	}

}
void display(int **a, int row, int col){
	int i, j;
	printf("entered the array element:\n");
	for (i = 0; i < row; i++){
		for (j = 0; j < col; j++){
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	
}