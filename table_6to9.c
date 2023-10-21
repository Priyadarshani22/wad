#include<stdio.h>
int main(){

	printf("multiplication table bet 6 to 9:\n");
	for (int i = 1; i <= 10; i++){

		for (int j = 6; j <= 9; j++){
			printf("%d\t",i*j);
		}
		printf("\n");
	}
	return 0;
}