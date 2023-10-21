#include<stdio.h>
int main(){
	int c, n, r, sum = 0;

		printf("enter num:");
		scanf_s("%d", &n);

	c = n;

	while (n > 0){
			r = n % 10;
		sum += (r*r*r);
		n = n / 10;
	}
		if (c == sum){
			printf("armstrong\n");
		}
		else{
			printf("not armstrong\n");
		}
			return 0;
	}

for ()