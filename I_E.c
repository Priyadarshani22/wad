#include<stdio.h>
int main(){
	int num, d1,d2,d3,sum;

	printf("enter no.\n");
	scanf_s("%4d", &num);
	d1 = num % 10;
	num = num / 10;

	d2 = num % 10;
	num = num / 10;

	d3 = num % 10;
	num = num / 10;

	sum = d1 + d2 + d3 + num;

	printf("%d \n", sum);
	return 0;
}
