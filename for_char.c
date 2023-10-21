#include<stdio.h>
int main(){
	char ch;

	printf("enter charactere.:");
	scanf_s("%c", &ch);

	if (ch >= 'A' && ch <= 'Z'){
		ch += 32;
	}
	else if (ch >= 'a' && ch <= 'z'){
		ch -= 32;
	}
	printf("reverse will be:%c\n", ch);

	return 0;
}