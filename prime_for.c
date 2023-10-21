#include<stdio.h>
int main(){

	int n, i;
	int f = 0;
	printf("enter no.\n");
	scanf_s("%d", &n);

	for ( i = 2; i <= n/2; i++){
		if (n % i == 0){
			f = 1;
			break;
		}
	}

	if (f == 0)
		printf("prime num\n");
	else
		printf("not prime\n");

	return 0;


}