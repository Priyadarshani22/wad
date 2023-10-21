#include<stdio.h>

int PN(int);
int main(){
	int a;
	printf("enter no.\n");
	scanf_s("%d", &a);

	int Pve_Nve= PN(a);

	if (Pve_Nve == 1){

		printf("num is +ve\n");
	}
	else if (a == 0){
		printf("num is 0, that is neither positive and negative \n");
	}else{
		printf("num is -ve\n");
	}
	return 0;
}

int PN(int a){

	if (a > 0)
		return 1;
	else
		return 0;
}
