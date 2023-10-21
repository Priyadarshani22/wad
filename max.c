#include<stdio.h>
int main(){
	int a, b;
	printf("enter no.\n");
	scanf_s("%d%d", &a, &b);

	if (a > b){
		printf("%d no. is max :",a);
	}
	else{
		printf("%d no. is max : ",b);
	}
	return 0;
}