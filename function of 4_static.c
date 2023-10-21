#include<stdio.h>


int Sum(int );
 
int main(){
	int Total;
	int n;
	int count = 1;

	while (count <= 4){

		printf("enter num:");
		scanf_s("%d", &n);

		Total = Sum(n);
		printf("result is:%d\n", Total);
		count++;

	}

	return 0;
}

int Sum(int a){
	
	static int Add;

	Add = Add+a;

	return Add;
}

