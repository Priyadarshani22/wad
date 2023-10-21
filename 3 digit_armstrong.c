#include<stdio.h>

int armstrong(int);

int main(){
	int n, res;
	printf("accept num:\n");
	scanf_s("%d", &n);

	res = armstrong(n);
	if (res == 1){
		printf("%d armstrong num\n ", n);
	}
	else{
		printf("%d not armstrong\n", n);
	}
	return 0;
}

int armstrong(int n){

	int c;
	int sum = 0;
	while (n >= 100 && n <= 999){
		printf("entered num is 3 digit\n");
		int r;
		c = n;

		while (n > 0){
			r = n % 10;
			sum += (r*r*r);
			n = n / 10;
		}
		if (sum == c)
			return 1;
		else
			return 0;
	}
}