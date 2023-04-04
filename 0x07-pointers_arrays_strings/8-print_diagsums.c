#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints diagonal summaries
 * @a: array to use
 * @size: size of diagonal
 */
void print_diagsums(int *a, int size)
{
	int k;
	int diagO = 0;
	int diagT = 0;

	for (k = 0; k < size; k++)
	{
		diagO += a[(k * size) + k];
		diagT += a[(size - 1) + ((size - 1) * k)];
	}
	printf("%d, %d\n", diagO, diagT);
}
