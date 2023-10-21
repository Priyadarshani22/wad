#include<stdio.h>

void swap(int*,int*);
int findSquare(int);

int a = 3; int b = 8;
int count;

int main(){

	int Square = findSquare(a);
	printf("Square:%d\n", Square);


	swap(&a, &b);
	printf("After swaping:\n%d\n%d\n", a, b);

	printf("function called count:%d\n", count);
	return 0;
}

void swap(int *a, int *b){
	int c = *a;
	*a = *b;
	*b = c;
	count++;
	}

int findSquare(int a){

	int Square = a*a;
	count++;
	return Square;
}

