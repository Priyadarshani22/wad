#include<stdio.h>
int main(){
	int n;

	printf("enter no.\n");
	scanf_s("%d", &n);

	for (int i = 1; i <= 10; i++){
		printf("table: %d\n", i*n);
	}
	return 0;
}