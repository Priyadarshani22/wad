#include <stdio.h>
#include<stdlib.h>

int main(){
	int *p, size, i;
	printf("enter no.of element : \n");
	scanf_s("%d", &size);

	p = (int*)malloc(sizeof(int)*size);

	printf("enter the size: %d", size);

	for (int i = 0; i <size; i++){
		scanf_s("%d", &p[i]);
	}

	printf("display the size:\n");

	for (int i = 0; i < size; i++){
		printf("display inpts :%d\n", p[i]);
	}
	free(p);
	return 0;
}