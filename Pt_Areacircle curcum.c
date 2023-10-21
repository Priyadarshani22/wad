#include<stdio.h>

void AreacircleCircum(int,float*, float*);

int main(){
	int r;
	float ACu,AC;

	printf("accept radius:");
	scanf_s("%d", &r);

AreacircleCircum(r, &AC, &ACu);

printf("area of circle:%f\n", AC);
printf("area of circumfernce of circle:%f\n", ACu);
return 0;
}

void AreacircleCircum(int r, float* AC, float* ACu) {
	*AC = 3.14*r*r;
	*ACu = 2 * 3.14*r;
}