#include<stdio.h>
int main(){
	int a, b;
	printf("enter no.\n");
	scanf_s("%d%d", &a, &b);

	if (a > b){
		printf("%d no. is max :", a);
	}
	else if (a<b){
		printf("%d no. is max : ", b);
	}
	else{
		printf("the no. is equal:");
	}

	return 0;
}