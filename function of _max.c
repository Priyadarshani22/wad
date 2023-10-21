#include<stdio.h>
#define MAX(max)  (a > b) ? ((a < c) ? a : c) : ((b>c )? b : c)

int main(){
	
	int a, b,c;
	printf("enter no.\n");
	scanf_s("%d%d%d", &a, &b,&c);

	printf("result is:%d\n", MAX(max));
	return 0;
}



