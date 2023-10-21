#include <stdio.h>

int main(){
	int arr[8][30];

	printf("enter the movie based on harry potter series:\n");
	for (int i = 0; i < 8; i++){
		gets_s(arr[i],29);
	}

	printf("the movie based on harry potter series are:\n");
	for (int i = 0; i < 8; i++){

		puts(arr[i]);
	}
	return 0;
}