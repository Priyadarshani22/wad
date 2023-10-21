#include<stdio.h>

int AreaO(float);
int main(){

	float r;
	printf("enter the radius:");
	scanf_s("%f", &r);

	float area = AreaO(r);
	printf("area ofcircle= %f \n", area);
	return 0;
}
int AreaO(float r){
	float A;

	A = 3.14*r*r;
	return A;
}