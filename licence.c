# include<stdio.h>
int main(){
	int age;
	printf("enter age\n");
	scanf_s("%d", &age);

	if (age >= 18){

		printf("issue licence\n");
	}
	else{
		printf("no licence \n");
	}
	return 0;
		}

