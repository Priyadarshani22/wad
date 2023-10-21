#include<stdio.h>
int main(){
	int  r,c, n, rev = 0;

	printf("enter num:");
	scanf_s("%d", &n);

	c = n;
	while (n != 0){
		r = n % 10;
		rev = rev * 10 + r;
		n = n / 10;
	}
	printf("reversed num:%d\n ", rev);

	if (c == rev)
		printf("it is rever:%d\n", c);
	
	else
		printf("not reverse: %d\n", c);
	
	return 0;
}

