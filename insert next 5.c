#include<stdio.h>

int InsertValue(int[]);

int main(){

	int arr[10] = { 1, 2, 3, 4, 5 };

	printf("Enter 5 additional numbers:\n");

	for (int i = 5; i < 10; i++) {
		scanf_s("%d", &arr[i]);
	}
	InsertValue(arr);

	return 0;
}

int InsertValue(int arr[]){
		
	printf("All 10 numbers are:\n");
	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
}
