#include<stdio.h>
int main(){
	int  r,n, sum = 0;

	printf("enter num:");
	scanf_s("%d", &n);


	while (n > 0){

		r = n % 10;
		sum += r;
		n = n / 10;
	}
	
		printf("sum is: %d\n",sum);
	
	return 0;
}