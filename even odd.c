#include<stdio.h>


void EvOd(int[]);

int main(){

	int arr[5];

	printf("accept 5 number:\n");

	for (int i = 0; i < 5; i++){
		scanf_s("%d", &arr[i]);
	}
		EvOd(arr);


		return 0;
	}

	void EvOd(int EO[]){
		int sumE = 0;
		int sumO = 0;

		for (int i = 0; i < 5; i += 2){

			sumE = sumE + EO[i];
		}
		for (int i = 1; i < 5; i +=2){
				sumO = sumO + EO[i];
			
			}
			printf("sum of even index num:%d\n", sumE);
			printf("sum of odd index num:%d\n", sumO);
		}
	
		

		

		