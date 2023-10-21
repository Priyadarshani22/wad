#include <stdio.h>

typedef struct Libmanage{
	int id;
	char name[70];
	float price;
}book;

book AccepInfo(book);
void DispInfo(book);

int main(){
	book b1 = { 0 };
	b1 = AccepInfo(b1);
	DispInfo(b1);
	return 0;
}

book AccepInfo(book b1){
	printf("accept book id, name and price:\n");

	scanf_s("%d", &b1.id);
	fflush(stdin);
	gets_s(b1.name, 69);
	scanf_s("%f", &b1.price);
	return b1;
}

void DispInfo(book b1) {
	printf("Display the book id: %d\n", b1.id);
	printf("Display the book name: %s\n", b1.name);
	printf("Display the book price: %f\n", b1.price);
}
