#include<stdio.h>
int main(){
	int n;
	printf("enter no.:");
	scanf_s("%d", &n);

	int i = n;
	while (i >= 1){
		printf("%d\n", i);
		i--;
	}
	return 0;
}