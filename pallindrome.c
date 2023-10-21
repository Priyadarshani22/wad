#include <stdio.h>

void pallindrome(char str[]);
int main() {
	char str[100];
	
	printf("Enter the string: ");
	gets_s(str, 100);
	
	pallindrome(str);
	return 0;
}

void pallindrome(char str[]){

	int i = 0;
	while (str[i] != '\0'){
		i++;
	}
	i--;
	while (i >= 0){
		printf("%c", str[i]);
		i--;
	}
	printf("\n");
}
