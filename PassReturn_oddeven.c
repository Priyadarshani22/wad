#include<stdio.h>

void oddeven();

int main(){

	int n;
	printf("enter num:");
	scanf_s("%d", &n);

	
	return 0;
}

void oddeven(){
	if (num % 2 == 0){
		return 1;
	}
	else{
		return 0;
	}
}