#include<stdio.h>

int toggle(char[],int n);

int main(){

	char str[300];

	printf("accept string from user:\n");
	gets_s(str, 299);



	return 0;
}
int toggle(char str[], int n){
	int i = 0;
	for (int i = 0; i < n; i++) {
		if (str[i] >= 'a'&& str[i] <= 'z'){


		}
		else if(str[i]>'A' && str[i] <= 'Z'){

		}
	}
}