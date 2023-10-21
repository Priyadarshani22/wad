#include<stdio.h>

int fact(int);

int main(){
	int n;
	printf("enter num:\n");
	scanf_s("%d", &n);

	int factorial=fact(n);
	printf("factorial is:%d\n", factorial);
	return 0;
}
int fact(int n){
	int fact = 1;
	for (int i = 1; i <= n; i++){
		fact = fact*i;
	}
	return fact;
}