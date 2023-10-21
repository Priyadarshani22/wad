#include<stdio.h>

int divisible(int);

int main(){
	int n, res;
	printf("accept num:\n");
	scanf_s("%d", &n);

	res =divisible(n);
	if (res == 1){
		printf("%d divisible by 5\n ", n);
	}
	else{
		printf("%d not divisible by 5\n", n);
	}
	return 0;
}

int divisible(int n){

	if (n%5== 0)
		return 1;
	else
		return 0;
}