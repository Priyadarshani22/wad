#include<stdio.h>

int search(int[], int);

int main(){

	int arr[5] = { 1, 2, 3, 4, 5 };
	int n;

	printf("accept integer from user\n");
	scanf_s("%d", &n);

	int index = search(arr, n);

	if (index == -1){
		printf("element is not found\n");
	}
	else{
		printf("element is found in index num :%d\n", index);
	}
	return 0;
}

int search(int a[], int n){
	for (int i = 0; i < 5; i++){
		if (a[i] == n){
			return i;
		}
	}
	return -1;
}