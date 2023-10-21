#include<stdio.h>
int main(){
	int c;
	int i = 0;

	while (i <= 1000){
		int sum = 0;
		int r;
		int n = i;
		c = n;

		while (n>0){
			r = n%10;
			sum += (r*r*r);
			n= n/ 10;
		}
		if (c == sum)
			printf("%d\n", c);
		i++;
	}

	return 0;

}
