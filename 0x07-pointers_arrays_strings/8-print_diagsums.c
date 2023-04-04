#include "main.h"
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
	_putchar(diagO + '0');
	_putchar(' ');
	_putchar(diagT + '0');
	_putchar('\n')
}
