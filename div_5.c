#include<stdio.h>
int main(){
	int a;
	printf("enter no.\n");
	scanf_s("%d", &a);

	if (a % 5 == 0){
		printf("the no. divisible:\n");
	}
	else{
		printf("no.is not divi:\n");
	}
	return 0;
}