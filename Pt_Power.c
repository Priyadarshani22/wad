#include<stdio.h>

int power(int*,int*, int*);

int main(){
	int b, in;
	int PW;
	printf("enter base and index num:\n");
	scanf_s("%d%d", &b, &in);

	power(&b, &in,&PW);

	printf("the %d to the power %d is:%d\n", b, in, PW);
	return 0;
}
int power(int *b, int *in,int *PW){
    *PW = 1;

	int i = 1;
	while (i <= *in){
		*PW *= *b;
		i++;
	}
}