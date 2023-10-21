#include<stdio.h>
int main(){
	char ch;
	int k;

	printf("enter charactere.:");
	scanf_s("%c", &ch);

	for (int i = ch- 1; i >= 0; i--){
		printf("reverse is\n%c",ch);
	}

		return 0;
}