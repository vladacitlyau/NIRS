#include <stdio.h>

int inner(int ax, int ay, int az, int bx, int by, int bz) {
	int result;
	result = ax * bx + ay * by + az * bz;
	return(result);
}

int main(void)
{
	
	int a[2];
	int i;
	printf("Calculator of vector's inner and cross product\n");
	printf("Please, enter vector's coordinates\n\n");
	for (i = 0; i < 3; i++) {
		printf("Enter a vector's coordinate [%d] = ", i+1);
		scanf("%d", &a[i]);
	}
	printf("\n");
	int b[2];
	for (i = 0; i < 3; i++) {
		printf("Enter b vector's coordinate [%d] = ", i + 1);
		scanf("%d", &b[i]);
	}
	int innerproduct = inner(a[0], a[1], a[2], b[0], b[1], b[2]);
	int icross = a[1] * b[2] - a[2] * b[1];
	int jcross = a[2] * b[0] - a[0] * b[2];
	int kcross = a[0] * b[1] - a[1] * b[0];

	printf("\n\nInner product is %d", innerproduct);
	printf("\nCross product is %d i + %d j + %d k", icross, jcross, kcross);

	getchar();
}