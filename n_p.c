#include<stdio.h>
int main(){
	int a;
	printf("enter no.\n");
	scanf_s("%d", &a);

	if (a >= 0){
		printf("no.is positive :");
	}
	else{
		printf("no.is negative :");
	}
	return 0;
}
