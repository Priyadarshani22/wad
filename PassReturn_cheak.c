#include<stdio.h>

int check(int);

int main(){
	int n, res;
	printf("accept num:\n");
	scanf_s("%d", &n);

	res= check(n);
	if (res == 1){
		printf("not prime\n");
	}
	else{
		printf("prime\n");
	}
	return 0;
}

int check(int n){
	int res;

	while (n <= 0){
		printf("num is -ve\n");
	
		printf("accept num:\n");
		scanf_s("%d", &n);
	}
	res = prime(n);
	return res;
}

int prime(int n){
	int f = 0, i = 2;
	while (i < n){
		if (n%i == 0)
			f = 1;
		break;
		i++;
	}
	if (f == 1)
		return 1;
	else
		return 0;
}
