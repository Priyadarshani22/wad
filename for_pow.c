#include<stdio.h>
int main(){
	int  b, in, pow = 1, i;

	printf("enter base and index num:\n");
	scanf_s("%d%d", &b, &in);

	i = 1;
	while (i <= in){
		pow = pow*b;
		i++;
	}
	printf("%d\n", pow);

	return 0;
}