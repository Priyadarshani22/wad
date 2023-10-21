
#include<stdio.h>

void SumN();

int main(){

	SumN();
	return 0;
}

void SumN(){
	int SumN = 0;
	for (int i = 1; i <= 10; i++){
		
		SumN = SumN + i;
		printf("%d\n", i);
	}
	printf("the sum :%d\n", SumN);
	}