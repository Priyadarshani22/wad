#include<stdio.h>
int main(){

	int e=0;
	int o = 0;

	//printf("enter no.\n");
	//scanf_s("%d", &n);

	for (int i = 1; i <= 20; i++){
		if (i % 2 == 0){
			e =e+i;
		}
		else{
			o=o+i;
		}
	}
	printf("sum of even%d\n", e);
	printf("sum of odd%d\n", o);
	return 0;
}