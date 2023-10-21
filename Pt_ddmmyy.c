#include<stdio.h>

void getDate(int*, int*, int*);

int main(){
	int date;
	int month;
	int year;

	getDate(&date, &month, &year);

	printf("Date= %d//%d//%02d",date,month,year%100);
	return 0;
}

void getDate(int*D, int*M, int*Y){
	
	printf("accept date:");
	scanf_s("%d",&*D);

	printf("accept month :");
	scanf_s("%d",&*M);

	printf("accept year :");
	scanf_s("%d",&*Y);
}