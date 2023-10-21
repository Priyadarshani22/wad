#include<stdio.h>

int Max(int,int);

int main(){
	int a, b;

	printf("enter 2 number:\n");
	scanf_s("%d%d", &a, &b);

	int Mm = Max(a, b);
	if (Mm == 1){
		printf("a = %d is greater\n",a);
	}
	else{
		printf("b = %d is Greater\n",b);
	}
	return 0;
}

int Max(int x, int y){
	if (x > y){
		return 1;
	}
	else{
		return 0;
	}

}