#include<stdio.h>
int main(){

	int n;

	printf("enter no.\n");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i += 2){
		;
		printf("series: %d\n", i);
	}
	return 0;
}