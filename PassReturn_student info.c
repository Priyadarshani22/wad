
#include<stdio.h>

int average(int, int, int, int, int);

int main(){
	int M,H,E,S,P;
	//int total;
	float avg;
	
	printf("accept 5 sub marks:\n");
	scanf_s("%d%d%d%d%d",&M,&H,&E,&S,&P);
	
	avg = average(M, H, E, S, P);
	printf("average is:%f\n",avg);

	return 0;

}
int average(int M, int H, int E, int P, int S){
	int total;
	float avg;
	total = M + H + E + P + S;
	avg = total / 5;
	return avg;
}

