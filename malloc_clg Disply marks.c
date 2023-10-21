#include <stdio.h>
#include<stdlib.h>

int main(){
	int *p,num,i;
	int Marks;

	printf("accept number of student:\n");
	scanf_s("%d", &num);

	p = (int*)malloc(num*sizeof(int));

	printf("marks of student:\n");

	for (int i = 0; i < num; i++){
		scanf_s("%d", &p[i]);

	}

	printf(" display marks of student:\n");

	for (int i = 0; i < num; i++){
		printf(" display marks of %d student:",i+1);
		printf("%d\n", p[i]);

	}

	free(p);
	return 0;
}