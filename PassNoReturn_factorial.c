#include<stdio.h>

void fact(int);

int main(){
	int n;
	printf("enter num:\n");
	scanf_s("%d", &n);

	fact(n);
	return 0;
}
void fact(int n){
	int fact = 1;
	  	for (int i = 1; i <= n; i++){
		fact = fact*i;
	}
	printf("factorial is:%d\n",fact);
}