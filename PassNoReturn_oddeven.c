#include<stdio.h>

void oddeven(int);

int main(){

	int n;
	printf("enter num:");
	scanf_s("%d", &n);

	oddeven(n);
	return 0;
}

void oddeven(int num){
	if (num % 2 == 0){
		printf("Given num is even:%d\n", num);
	}
	else{
		printf("Given num is odd\n");
	}
}