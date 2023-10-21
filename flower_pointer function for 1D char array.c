#include <stdio.h>
#include <stdlib.h>

char acceptFlowerNames(char *flowers);

int main() {
	char name = NULL;
	name=acceptFlowerNames(name);
	puts(name);
	return 0;
}

char acceptFlowerNames(char *flowers) {
	char str[100];
	printf("accept Flower names:\n");
	gets_s(str,99);

	flowers = (char*)malloc(strlen(str) + 1);

	strcpy(flowers, str);

	return flowers;
}





