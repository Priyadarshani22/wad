#include<stdio.h>

void even();
void odd();

int main(){
	int choice;

	printf("1: sum of 10 even num\n");
	printf("2: sum of 10 odd num\n");

	printf("Enter Choice:");
	scanf_s("%d", &choice);
		
	switch (choice){
	case 1:even();
		break;
	case 2:odd();
		break;
	default:printf("enter valide choice\n");
		break;
	}
	return 0;
}

void even(){
	int sum = 0;
	for (int i = 1; i <= 10; i++){
		if (i % 2 == 0){
			sum += i;
		}
	}
	printf("sum of even:%d\n", sum);
}
void odd(){
	int sum = 0;
	for (int i = 1; i <= 10; i++){
		if (i % 2 != 0){
			sum += i;
		}
	}
	printf("sum of odd:%d\n", sum);
}
