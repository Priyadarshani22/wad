
#include<stdio.h>

void StudentInfo(int*, float*, char*);

int main(){
	
	int r;
	float m;
	char g;

	StudentInfo(&r, &m, &g);

	printf("accepted rollnum and percentage marks:\n%d\n%f\n", r, m);
	printf("selected gender:%c\n", g);
	return 0;
}
void StudentInfo(int* r, float* m, char* g){


	printf("accept rollnum and percentage marks:\n");
	scanf_s("%d%f", &*r, &*m);

	printf("select gender F/M:\n");
	fflush(stdin);
	scanf_s("%c", &*g);
}

