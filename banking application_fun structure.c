#include <stdio.h>

	
typedef struct bankingApp{
		int accNo;
		float bal;
		char name[50];
	
}Customer;
	
Customer accept(Customer);
void display(Customer);


int main() {
	Customer c1 = { 0 };
	            
    c1= accept(c1);
	printf("\nCustomer Details:\n");
	display(c1);

	return 0;
}

Customer accept(Customer c1) {
	printf("Enter account number,balance,name:\n ");
	scanf_s("%d", &c1.accNo);
	scanf_s("%f", &c1.bal);
	fflush(stdin);
	gets_s(c1.name, 49);

	return c1;
}
void display(Customer c1) {
	
	printf("Account Number: %d\n", c1.accNo);
	printf("Balance: %f\n", c1.bal);
	printf("Enter name:");
	puts(c1.name);
}
