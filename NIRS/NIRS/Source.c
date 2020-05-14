#include <stdio.h>
#include <math.h>
#define length 3
#define nlength 7

int main(void)
{
	
	int array[length];
	int i;
	printf("Calculator of three-dimensional vector length\n");
	printf("To calculate vector's length you should enter vector's coordinates");
	for (i = 0; i < length; i++) {
		printf("\nEnter vector's coordinate [%d] = ", i+1);
		scanf("%d", &array[i]);
	}
	printf("\nCoordinates of vector: \n");
	for (i = 0; i < length; i++) {
		printf("%d ", array[i]);
	}

	int sum = 0;
	for (i = 0; i < length; i++) {
		sum = sum + array[i]*array[i];
	}
	double result = sqrt(sum);
	printf("\n\nVector's length = %.4f\n", result);


	int arrayn[nlength];
	printf("\n\n\nCalculator of n-dimensional vector length\n");
	printf("To calculate vector's length you should enter vector's coordinates");
	for (i = 0; i < nlength; i++) {
		printf("\nEnter vector's coordinate [%d] = ", i + 1);
		scanf("%d", &arrayn[i]);
	}
	printf("\nCoordinates of vector: \n");
	for (i = 0; i < nlength; i++) {
		printf("%d ", arrayn[i]);
	}

	int sumn = 0;
	for (i = 0; i < nlength; i++) {
		sumn = sumn + arrayn[i] * arrayn[i];
	}
	double resultn = sqrt(sumn);
	printf("\n\nVector's length = %.4f\n", resultn);

	getchar();
}