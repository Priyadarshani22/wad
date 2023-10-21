#include<stdio.h>

void AreaCircum(float*, float*);
void AreaPeri(float*, float*);

int main(){
	int choice;
	float C,P;
	float AP, AC;

	printf("Enter Choice:");
	scanf_s("%d", &choice);

	switch (choice){
	case 1:AreaCircum(&C,&AC);
		printf("area of circumference circle:%f\n", C);
		printf("area of circle:%f\n", AC);
		break;

	case 2:AreaPeri(&P,&AP);
		printf("perimeter of rectangle:%f\n", P);
		printf("area of perimeter of rectangle:%f\n", AP);
		break;
	default:printf("wrong choice\n");
	}
	return 0;
	}

void AreaCircum(float *C, float*AC){
	int r;
	printf("take radius:");
	scanf_s("%d", &r);

	*AC = 3.14*r*r;
	*C = 2 * 3.14*r;
	}

void AreaPeri(float *P,float*AP){
	int L, W;
	printf("take length and width:");
	scanf_s("%d%d", &L, &W);
	
	*P= 2 *(L+W);
	*AP = L*W;
	}