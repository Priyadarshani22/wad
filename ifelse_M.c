#include<stdio.h>
int main(){
	int M;

	printf("enter marks:\n");
	scanf_s("%d", &M);

	if (M >= 75 && M < 100){
		printf("grade A \n");
	}
	else if (M >= 60 && M < 75){
		printf("grade B \n");
	}
	if (M >= 40 && M < 60){
		printf("grade C \n");
	}
	else{
		printf("grade F : \n");
	}
	return 0;
}