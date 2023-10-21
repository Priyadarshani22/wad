#include<stdio.h>

void string(char[]);
int main(){

	char str[20];

	printf("accept name of student:\n");
	gets_s(str,19);
	
	string(str);
	
	return 0;
}

void string(char str[]){
	puts(str);
	//printf("Name of the student: %s\n", str);

}
