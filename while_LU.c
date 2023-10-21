#include <stdio.h>

int main() {
	int L, U;

	printf("Enter the lower & upper limit:\n ");
	scanf_s("%d%d",&L,&U);

	printf("D every 3rd num from L to U limit:\n");

	int i = L;
	while (i <= U) {
		printf("%d\n", i);
		i = i + 3;
	}

	return 0;
}