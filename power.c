#include<stdio.h>

int power(int, int);

int main(){
	int b, in;

	printf("enter base and index num:\n");
	scanf_s("%d%d", &b, &in);

	int PW = power(b, in);
	printf("the %d to the power %d is:%d\n", b, in, PW);
	return 0;
}
int power(int b, int in){
	int PW = 1, i;

	i = 1;
	while (i <= in){
		PW = PW*b;
		i++;
	}
	return PW;

}