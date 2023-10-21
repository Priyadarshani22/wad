#include<stdio.h>
int main(){
	int a, b, c, max;

	printf("enter no.:");
	scanf_s("%d%d%d", &a, &b, &c);


	max = (a > b) ? ((a < c) ? a : c) : ((b>c )? b : c);

	printf("%d\n", max);
	return 0;
}