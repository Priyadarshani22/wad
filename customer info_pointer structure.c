#include <stdio.h>

typedef struct customer{
	int age;
	char name[70];
	char city[78];
}cus;

void accept(cus*);
void display(cus);

int main(){
	cus c1 = { 0 };
	accept(&c1);
	display(c1);
	return 0;
}

void accept(cus *c1){
	printf(" enter the customer mobile no., name and city:\n");

	scanf_s("%d", &c1->age);
	fflush(stdin);
	gets_s(c1->name, 69);

	gets_s(c1->city, 77);
}
void display(cus c1){
	printf(" display the customer mobile no., name and city:\n");
	printf("age:%d\n", c1.age);
	printf("name:");
	puts(c1.name, 69);
	printf("city:");
	puts(c1.city, 77);
}