#include<stdio.h>

int main(){
    
	int c;
	for (int i= 100; i<= 1000; i++){
		int n = i;
		c = n;
		int r;
		int sum = 0;
		while (n !=0){
			r = n % 10;
			sum += (r*r*r);
			n = n / 10;
		}

		if (sum == c)
			printf("%d\n", c);
			}
		return 0;
	}
