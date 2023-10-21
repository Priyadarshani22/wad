#include<stdio.h>

int searchChar(char[],char);

int main(){
	char str[100] = "gitangali";
	char c;

	printf("accept character:\n");
	scanf_s("%c", &c);

	char occ = searchChar(str, c);
	if (occ == -1){
		printf("character not found\n");
	}
	else{
		printf("character found at index: %d\n", occ);
	}
	return 0;
}
int searchChar(char str[], char c){
	int i;
	for (i = 0; str[i] != '\0'; i++){
		if (str[i] == c)
			return i;
	}
	return -1;
}

