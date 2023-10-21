#include<stdio.h>

void SI(float,float,float);

int main(){
	float p,r,t;

	printf("enter principle,rate of interast,time :\n");
	scanf_s("%f%f%f", &p, &r,&t);

	SI(p,r,t);
	return 0;
}
void SI(float p, float r, float t){
	float SI;
	SI = (p*r*t) / 100;
	printf("simple interast:%f\n", SI);
}