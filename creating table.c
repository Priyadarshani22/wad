#include<stdio.h>

void charline(int, char );

int main(){
	int l;
	char ch;

	printf("take length and character to draw line:");
	scanf_s("%d",&l);

	printf("enter character:");
	fflush(stdin);
	scanf_s("%c", &ch);

	charline(l,ch);// take length between 25 to 30
	printf("\ndata type\tsize in bytes\n");

	charline(l, ch);
	printf("\nint\t\t %d\n",sizeof(int));

	charline(l, ch);
	printf("\nchar\t\t %d\n", sizeof(char));

	charline(l, ch);
	printf("\nfloat\t\t %d\n", sizeof(float));

	charline(l, ch);
	printf("\ndouble\t\t %d\n", sizeof(double));
	charline(l, ch);

	return 0;
}

void charline(int l, char ch){
	for (int i = 1; i <= l; i++){

		printf("%c", ch);
	}
}