#include<stdio.h>

void ND(int, int, float *, int *);

int main(){
	int n, d;
	float  div;
	int rem;

	printf("enter numerator and denominator:\n");
	scanf_s("%d%d", &n, &d);

	ND(n, d,&div,&rem);
	
	printf("Quotient :%f\n", div);
	printf("remainder :%d\n", rem);
	return 0; 
}

void ND(int a, int b,float *div,int *R){
	
	if (b != 0){
		*div = (float)a / b;
		*R = a%b;
	}
	else{
		printf("denominator should not be 0\n");
		printf("enter valid denomenator:");
		scanf_s("%d", &b);
	}
}