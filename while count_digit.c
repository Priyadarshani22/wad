#include<stdio.h>
int main(){
	int n, count = 0;

		printf("enter num:");
	scanf_s("%d", &n);

	while (n > 0){
		n = n / 10;
		count++;
	}
	printf("digit in enterd num:%d\n", count);
	return 0;
	}