#include<stdio.h>
int main(){
	int fact,n;

	printf("enter no.\n");
	scanf_s("%d", &fact);

	for (int i = 1; i <= n; i++){

		fact = fact*i;
		
	}
	printf("fact no: %d\n", fact);
	return 0;
}