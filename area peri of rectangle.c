#include<stdio.h>
#define PI 3.14
#include"areaPeri.h"

int main(){

	float a, b, c;
	float r;
	printf("enter value.\n");
	scanf_s("%f%f%f", &a, &b, &c);
	printf("enter radius.\n");
	scanf_s("%f", &r);

	printf("area of triangle:%f\n", AREAT(a, b));//a=base,b=height
	printf("area of square:%f\n", AREAS(a));//a=side square
	printf("area of circle:%f\n", AREAC(r));
	printf("Perimeter of triangle:%f\n", PERIT(a, b, c));
	printf("Perimeter of square:%f\n", PERIS(a));//a=side
	printf("Perimeter of circle:%f\n", PERIC(r));
	return 0;
}