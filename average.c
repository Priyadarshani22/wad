#include<stdio.h>

void avg (int[]);

int main(){

	int marks[5];
	
	//float average;

	printf("enter 5 sub marks\n");
	for (int i = 0; i < 5; i++){
		scanf_s("%d", &marks[i]);
	}
	 avg(marks);


	return 0;
	}

void avg (int marks[]){
	float sum = 0;
	for (int i = 0; i < 5; i++){
		sum = sum + marks[i];
	}
	float Avg = sum / 5;
	printf("Average marks: %f\n", Avg);
	
}


