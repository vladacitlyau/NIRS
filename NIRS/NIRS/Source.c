#include <stdio.h>
#define length 10

int main(void)
{
	
	int array[length];
	int i;
	printf("Array");
	for (i = 0; i < length; i++) {
		printf("Enter array's element a[%d] = ", i);
		scanf("%d", &array[i]);
	}
	for (i = 0; i < length; i++) {
		printf("%d ", array[i]);
	}
	int max = 0;
	for (i = 0; i < length; i++) {
		if (array[max] < array[i]) {
			max = i;
		}
	}
	int min = 0;
	for (i = 0; i < length; i++) {
		if (array[min] > array[i]) {
			min = i;
		}
	}
	printf("\nmax = %d", array[max]);
	printf("\nmin = %d", array[min]);

	getchar();
}