#include <stdio.h>
#include <math.h>
#include "search_algos.h"
#include "0-linear.c"

/**
  * jump_search - Searches for a value in an array of
  * integers using the Linear search algorithm
  *
  * @array: A pointer to the first element of the array to search in
  * @size: The number of elements in array
  * @value: The value to search for
  *
  * Return: The first index where value is located
  */
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
