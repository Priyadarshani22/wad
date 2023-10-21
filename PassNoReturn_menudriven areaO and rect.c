#include<stdio.h>

void AreaCircum();
void AreaPeri();

int main(){
	int choice;

	printf("Enter Choice:");
	scanf_s("%d", &choice);

	switch (choice){
	case 1:AreaCircum();
		break;
	case 2:AreaPeri();
		break;
	default:printf("wrong choice\n");
	}
	return 0;
	}

void AreaCircum( ){
	int r;
	printf("take radius:");
	scanf_s("%d", &r);

	float C;
	C = 2 * 3.14*r*r;
	printf("area of circumference:%f\n",C);
}

void AreaPeri(){
	int L, W;
	printf("take length and width:");
	scanf_s("%d%d", &L, &W);

	float P;
	P= 2 *(L+W);
	printf("area of perimeter of rectangle:%f\n", P);
}