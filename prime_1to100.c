# include<stdio.h>
int main(){
	int j;
	for (int i = 1; i <= 100;i++){
		int f = 0;
		for (j = 2; j <=i/2;j++)
		if (i%j == 0){
			f = 1;
		}
		if (f == 0)
			printf("prime:%d\n",i);
		}
		return 0;
		}