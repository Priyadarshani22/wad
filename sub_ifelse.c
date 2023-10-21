#include<stdio.h>
int main(){
	int a, b;
	printf("enter no.\n");
	scanf_s("%d%d", &a, &b);

	if (a > b){
		printf(" sub is possible : %d \n", a - b);
	}
	else{
		printf("sub is not possible\n");
	}
	return 0;
}