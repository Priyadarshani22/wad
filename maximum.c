#include<stdio.h>
int main(){

	int arr[5];

	printf("enter 5 number\n");
	for (int i = 0; i < 5; i++){
		scanf_s("%d", &arr[i]);
	}
	int max = arr[0];

	for (int i = 1; i < 5; i++){
		if (arr[i]>max)
			max = arr[i];
		}
		printf("maximum num:%d\n", max);
		return 0;
	}

