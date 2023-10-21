#include<stdio.h>

int string(char[]);

int main(){

	char str1[100];
	char str2[100];

	printf("accept 1st name of customer:\n");
	gets_s(str1, 99);
	printf("accept 2nd name of customer:\n");
	gets_s(str2, 99);
	

	printf("count for 1st string %d\n", string(str1));
	printf("count for 2nd string %d\n", string(str2));

	if (str1 > str2){
		printf("str1 length is greater by letter : %d\n", string(str1) - string(str2));
	}
	else{
		printf("str2 length is greater by letter: %d\n", string(str1) - string(str2));
	}

	return 0;
}

int string(char str[]){
	int i = 0;
	int count = 0;
	while (str[i] != '\0'){
		count++;
		i++;
	}
	return count;
}