#include<stdio.h>

int Alphabet(char);
int main(){
	char ch;

	printf("enter charactere.:");
	scanf_s("%c", &ch);

	char Alpha = Alphabet(ch);
	if (Alpha == 1){
		printf("%c is Alphabet\n", ch);
	}
	else{
		printf("%c is not Alphabet\n");
		printf("Enter valide character\n");
	}
	return 0;
}

int Alphabet(char ch){

	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
		return 1;
	else
		return 0;
}