#include<stdio.h>
int main(){
	int a,div,d1,d2,mul,sub,add;
	printf("enter choice.:\n");
	scanf_s("%d", &a);

    printf("enter no.\n");
	scanf_s("%d%d", &d1,&d2);

	add = d1 + d2;
	sub = d1 - d2;
	div = d1*d2;
	mul = d1 / d2;

	

	switch (a){
	case 1:printf("addition: %d",add );
		break;

	case 2:printf("sub: %d", sub);
		break;

	case 3:printf("mul:%d", mul);
		break;

	case 4:printf("div: %d", div);
		break;
	default:
		printf("exit\n");
	}
	return 0;
}

