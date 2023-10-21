#include<stdio.h>

int v(char[]);
int main(){

	char vowels[20];

	printf("accept string from user:\n");
	gets_s(vowels, 19);

	int count=v(vowels);
	printf("number of vowels%d\n",count);

	return 0;
}
int v(char vowels[]){

	int count = 0;
	int i=0;
	while (vowels[i] != '\0'){
		if (vowels[i] == 'a' || vowels[i] == 'e' || vowels[i] == 'i' || vowels[i] == 'o' || vowels[i] == 'u')
			count ++;
		i++;
	}
	return count;
}
