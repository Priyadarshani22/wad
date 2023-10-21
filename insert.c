#include<stdio.h>

int InsertValue(int[], int);

int main(){

	int arr[10] = { 1, 2, 3, 4, 5 };
	int n;
	int p;
	

	printf("accept element from user\n");
	scanf_s("%d", &n);

	printf("enter position u want to insert element\n");
	scanf_s("%d", &p);

	InsertValue(arr, n, p);

	printf("after insertion:\n");

	for (p = 0; p < 5; p++){
		printf("%d\n", arr[p]);
	}
	return 0;
}

int InsertValue(int arr[], int n, int p){

	arr[p] = n;
}