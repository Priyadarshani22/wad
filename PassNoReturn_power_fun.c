#include<stdio.h>

void power(int,int);

int main(){
	int b, in;

	printf("enter base and index num:\n");
	scanf_s("%d%d", &b, &in);

	power(b, in);
	return 0;
}
void power(int b,int in){
	int pow = 1, i;
	i = 1;
	while (i <= in){
		pow = pow*b;
		i++;
	}
	printf("the %d to the power %d is:%d\n",b,in, pow);
	}