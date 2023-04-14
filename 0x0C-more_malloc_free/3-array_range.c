#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - range of arrays
 * @min: min of arrange
 * @max: max of arrays
 * Return: int value
 */
int *array_range(int min, int max)
{
	int p;
	int *q;
	int length;

	if (min > max)
		return (NULL);
	length = 0;
	for (p = min; p <= max; p++)
		length++;

	q = malloc(sizeof(int) * length);
	if (q == NULL)
		return (NULL);

	p = 0;
	while (min <= max)
	{
		q[p] = min;
		p++;
		min++;
	}
	return (q);
}
