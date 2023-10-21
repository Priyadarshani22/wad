#include<stdio.h>

int main(){
	int l, i, j, b;
	printf("enter length and bredth:");
	scanf_s("%d", &l,&b);

	printf("%c", 218);

	for (i = 1; i <=l; i++){
		printf("%c", 196);
	}
	printf("%c\n", 191);

	for (i = 1; i <= b; i++){
		printf("%c", 179);
		for (j = 1; j <= l; j++){
			printf("");
		}
		printf("%c\n", 179);
	}
	printf("%c", 192);
	for (i = 1; i <= l; i++){
		printf("%c", 196);
	}
	printf("%c", 217);

	return 0;
}