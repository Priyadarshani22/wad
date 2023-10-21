#include <stdio.h>
#include <stdlib.h>

/*
void calculateAverageRainfall(float rainfall[4][], int n);

int main() {
    int n;
    float rainfall[4][12];

    printf("Enter the number of years: ");
    scanf("%d", &n);

    // Accept rainfall values from the user
    printf("Enter the rainfall values for each month:\n");
    for (int i = 0; i < 4; i++) {
        printf("Month %d:\n", i + 1);
        for (int j = 0; j < n; j++) {
            printf("Year %d: ", j + 1);
            scanf("%f", &rainfall[i][j]);
        }
    }

    // Calculate and display the average rainfall month-wise
    calculateAverageRainfall(rainfall, n);

    return 0;
}

void calculateAverageRainfall(float rainfall[4][], int n) {
    printf("Average rainfall month-wise:\n");
    for (int i = 0; i < 4; i++) {
        float sum = 0;
        for (int j = 0; j < n; j++) {
            sum += rainfall[i][j];
        }
        float average = sum / n;
        printf("Month %d: %.2f\n", i + 1, average);
    }
}*/

int main{
	int* rainFall[4];
	int n;
	float tem;
	float sum = 0;
	float avg = 0;

	printf("Enter the number of years: ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++){
		
		n[i] = (int*)malloc(datasize(int)*n);
	}

	printf(" accept temprature:\n");
	for (int i = 0; i <colsize; i++){
		scanf_s("%f", &rainFall[i]);
	}
	printf("Enter the rainfall values for no. year:\n");
	for (int i = 0; i < 4; i++) {
		printf("Month %d:\n", i + 1);
		for (int j = 0; j < n; j++) {
			printf("Year %d: ", j + 1);
			scanf("%f", &rainfall[i][j]);
		}
	}

	for (int i = 0; i < colSize; i++){
		printf("temprature is:%f\n", rainFall[i]);
		sum = sum + rainFall[i];
	}
	avg = sum / colSize;

	for (int i = 0; i < 4; i++){
		free(rainFall[i]);
	}
	return 0;
}

