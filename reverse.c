#include<stdio.h>
int main(){
	int arr[5];

	printf("accept 5 number:\n");
	for (int i = 0; i < 5; i++){
		scanf_s("%d", &arr[i]);
	}

	printf("accepted 5 number in reverse order:\n");

	for (int i = 5; i>0; i--){
		printf("%d\n",arr[i]);
	}
	return 0;
}