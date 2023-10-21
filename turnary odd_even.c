#include<stdio.h>
int main(){
	int a;

	printf("enter no.\n");
	scanf_s("%d", &a);

	(a % 2 == 0) ? printf("even\n") : printf("odd\n");
	return 0;
}
