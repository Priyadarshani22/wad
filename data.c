#include<stdio.h>
int main(){
	int r;
	float m;
	char g ;

	printf("enter student rollno.,marks, gender \n");
	
	scanf_s("%d%f",&r,&m);
	printf("enter gender :\n");
    fflush(stdin);
	scanf_s("%c", &g);
	


	printf("student rollno. =%d \n", r);
	printf("student marks = %f\n", m);
	printf("student gender = %c\n",g);

	return 0;
}