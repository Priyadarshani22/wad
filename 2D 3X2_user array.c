#include <stdio.h>

int main(){
	int arr[3][2];
	//int r = 3, c = 2;

	printf("Accept values for the matrix:\n");
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 2; j++){
			scanf_s("%d", (*(arr + i) + j));
		}
	}

	printf("Matrix:\n");
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 2; j++){
			printf("%d ", *(*(arr + i) + j));
		}
		printf("\n");
	}

	return 0;
}