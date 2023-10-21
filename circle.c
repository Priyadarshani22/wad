#include<stdio.h>
int main(){

	float r;
	float area;
	const float pi = 3.14;

	printf("enter the radius :");
	scanf_s("%f", &r);

	area = 3.14*r*r;
	printf("area ofcircle %f \n", area);
	return 0;
}