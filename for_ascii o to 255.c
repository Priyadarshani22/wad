#include<stdio.h>
int main(){

	for (int i = 0; i <= 255; i++){
		printf("%c\n", i);
		if (i % 10 == 0){
			getch();
		}
	}
return 0;
}