#include<stdio.h>
int main(){
	int n, r, c, rev = 0;
	printf("enter no.:");
	scanf_s("%d", &n);

	c = n;
	while (n != 0){
		r = n % 10;
		rev = rev * 10 + r;
		n = n / 10;

	}
	printf("the reverse is:%d\n", rev);
	if (c == rev){
		printf("it is pallindrom:\n");
	}
	else{
		printf("it is not pallindrom\n");
	}
	return 0;
}