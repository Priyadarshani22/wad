#include <stdio.h>

typedef struct employee{
	int age;
	char name[70];
	char city[78];
}emp;

void accept(emp*);
void display(emp);

int main(){
	emp e1 = { 0 };
	accept(&e1);
	display(e1);
	return 0;
}

void accept(emp *e1){
	printf(" enter the employee mobile no., name and city:\n");

	scanf_s("%d", &e1->age);
	fflush(stdin);
	gets_s(e1->name,69);

	gets_s(e1->city,77);
}
void display(emp e1){
	printf(" display the employee mobile no., name and city:\n");
	printf("mobile number:%d\n", e1.age);
	printf("name:");
	puts(e1.name, 69);
	printf("city:");
	puts(e1.city, 77);
}