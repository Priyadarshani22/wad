#include<stdio.h>
int main(){
	char ch;

	printf("enter charactere.:");
	scanf_s("%c", &ch);

	if (ch >= 'A' && ch <= 'Z'){
		printf("enter character is capital\n");
	}
	else if (ch >= 'a' && ch <= 'z'){
		printf("enter character is small\n");
	}
	else  {
		printf("thise is digit no.\n");
	}
	return 0;
}
