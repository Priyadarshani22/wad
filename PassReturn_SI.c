#include<stdio.h>

float SI(float, float, float);

int main(){
	float p, r, t;
	float S;


	printf("enter principle,rate of interast,time :\n");
	scanf_s("%f%f%f", &p, &r, &t);

	S= SI(p, r, t);
	printf("simple interast:%f\n", S);
	return 0;
}
float SI(float p, float r, float t){
	float S;
	S = (p*r*t) / 100;
	return S;
}