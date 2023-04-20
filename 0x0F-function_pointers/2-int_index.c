#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - indexes aray i think
 * @array: array to go through
 * @size: is the number of elements in the array
 * @cmp:  is a pointer to the function to be used to compare values
 * Return: returns the index of the first element
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int p;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (p = 0; p < size; p++)
	{
		if (cmp(array[p]))
			return (p);
	}
	return (-1);
}
