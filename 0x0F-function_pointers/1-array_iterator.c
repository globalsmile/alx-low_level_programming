#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - iterates through array
 * @array: array to go through
 * @size: size of array
 * @action: is a pointer to the callback function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int p;

	if (array == NULL || action == NULL)
		exit(98);
	for (p = 0; p < size; p++)
	{
		action(array[p]);
	}
}
