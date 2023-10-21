#include<stdio.h>

int main()

{
	float r,c;
                           
	const float pi = 3.14;

	printf("enter the radius :");
	scanf_s("%f", &r);

	c = 2 *3.14*r;

	printf("circumference= %f \n", c);

	return 0;

}