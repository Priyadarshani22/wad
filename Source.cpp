//(a > b) ? ((a < c) ? a : c) : ((b>c) ? b : c)
#include<stdio.h>

int main(){
	int a = 6, b = 5, c = 3;
	

	if (a > b){
		printf("a");
	}
	else if (a < c){
		printf("c");
	}
	else if (b>c){
		printf("b");
	}
	else{
		printf("c");
	}


	return 0;
}