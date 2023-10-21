#include<stdio.h>
int main(){
	int A1[3];
	int A2[4];
	int merge[7];
	int i;

	printf("accept 3 number for array 1:\n");
	for ( i = 0; i < 3; i++){
		scanf_s("%d", &A1[i]);
	}
	printf("accept 4 number for array 2:\n");
	for ( i = 0; i < 4; i++){
		scanf_s("%d", &A2[i]);
	}

	for (i = 0; i < 3; i++){
		merge[i] = A1[i];
	}
	for (i = 0; i < 4; i++){
		merge[i + 3] = A2[i];
	}
	 
	printf("after merging 2 array:\n");
	for (i = 0; i < 7; i++){
		printf("%d\n", merge[i]);
	}
	return 0;
}




