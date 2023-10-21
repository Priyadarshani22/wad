
#include<stdio.h>

void StudentInfo(int, float, char);

int main(){
	int r;
	float m;
	char g;

	printf("accept rollnum and percentage marks:\n");
	scanf_s("%d%f", &r, &m);

	printf("select gender F/M:\n");
	fflush(stdin);
	scanf_s("%c", &g);

	StudentInfo(r,m,g);
	return 0;
}
void StudentInfo(int n,float p,char c){
	
	printf("accept rollnum and percentage marks:\n%d\n%f\n", n, p);
	printf("selected gender:%c\n",c);
}

	