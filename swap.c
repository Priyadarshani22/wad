#include <stdio.h> 
int main()
{
	int a, b, c;

	printf("enter 3 value\n ");
	scanf_s("%d%d%d", &a, &b, &c);

	c = a;
	a= b;
	b= c;
	printf("After Swappingn First variable will be = %d\n",a);
	printf("After Swappingn second variable will be = %d\n", b);
	printf("After Swappingn 3 variable will be = %d\n", c);
	return 0;
}