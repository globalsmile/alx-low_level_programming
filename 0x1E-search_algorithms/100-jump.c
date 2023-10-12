#include <stdio.h>
#include <math.h>
#include "0-linear.c"

int jump_search(int *array, size_t size, int value)
{
	size_t jump_step = sqrt(size);
	size_t current = 0;

	while (current < size && array[current] < value)
	{
		if (current > 0)
			printf("Value checked array[%ld] = [%d]\n", current, array[current]);
		current += jump_step;
	}
	linear_search(array, size, value);
	return (-1);
}
