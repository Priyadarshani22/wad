#include<stdio.h>

void swap(int,int);

int main(){
	int a, b;
	printf("enter 2 num:\n");
	scanf_s("%d%d", &a, &b);
	
	printf("before swaping:\n%d\n%d\n", a, b);
	swap(a, b);
	return 0;
}
void swap(int a,int b){
	int c = a;
	a = b;
	b = c;
	printf("after swaping:\n%d\n%d\n", a, b);
}