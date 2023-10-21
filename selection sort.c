#include<stdio.h>

void selectionSort(int[],int);
int main(){
	int arr[5] = { 11, 45, 12, 23, 40 };

	printf("before sorting\n");

	selectionSort(arr, 5);
	printf("after sorting\n");

	return 0;
}

void selectionSort(int arr[], int n){
	int Small;
	int Tem;
	for (int i = 0; i < n - 1; i++){
		Small = i;
		for (int j = i + 1; j < n; j++){
			if (arr[Small]>arr[j])
				Small = j;
		}
		if (i != Small){
			Tem = arr[j];
			arr[j] = arr[Small];
			arr[Small] = Tem;
		}
	}
}