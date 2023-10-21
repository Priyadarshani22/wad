# include<stdio.h>
int main(){
	int a;
	printf("enter no. \n");
	scanf_s("%d", &a);

	if (a > 0){

		printf("no. is G than 0:  %d", a*a);
	}
	else{
		printf("no.is L than 0 : ");
	}
	return 0;
}