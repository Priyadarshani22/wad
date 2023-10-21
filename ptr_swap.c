#include<stdio.h>

void Swap(int*,int*);

int main(){
	int a, b;

	printf("enter num.\n");
	scanf_s("%d%d", &a, &b);

	printf("Before swaping:\n a= %d\n b= %d\n", a, b);
	Swap(&a, &b);
	printf("After swaping:\n a= %d\n b= %d\n",a,b);
	return 0;
}

void Swap(int *a, int *b){

	int c = *a;
	*a = *b;
	*b = c;
}