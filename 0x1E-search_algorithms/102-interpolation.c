#include <stdio.h>
#include "search_algos.h"
#include "0-linear.c"
/**
  * interpolation_search - Searches for a value in an array of
  * integers using the Linear search algorithm
  *
  * @array: A pointer to the first element of the array to search in
  * @size: The number of elements in array
  * @value: The value to search for
  *
  * Return: The first index where value is located
  */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t pos = low + (((double)(high - low) /
				(array[high] - array[low])) * (value - array[low]));
	while (low <= high && value >= array[low] && value <= array[high])
	{
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		linear_search(array, size, value);
		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
    return (-1);
}
