#include<stdio.h>

int addition(int,int);

int main(){
	int a, b;
	printf("accept 2 num from user:\n");
	scanf_s("%d%d", &a, &b);

	int sum=addition(a,b);
	printf("addition:%d\n", sum);
	return 0;
}
int addition(int x,int y){
	
	return x + y;
	
}

