#include<stdio.h>
int main(){
	int m, h, e, u, s,avg;
	

	printf("enter student marks of 5 sub \n");
	scanf_s("%d%d%d%d%d",&m, &h,&u,&s,&e);

	avg = (m + h + e + u + s) / 5;

	printf("student marks of marathi. =%d \n", avg);
	
	return 0;
}