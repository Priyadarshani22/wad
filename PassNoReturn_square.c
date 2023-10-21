#include<stdio.h>

void Square(int);

int main(){
	int n;

	printf("enter num:");
	scanf_s("%d", &n);

	Square(n);
	return 0;
}

void Square(int x){
	
	printf("Square of %d is:%d\n", x, x*x);
}