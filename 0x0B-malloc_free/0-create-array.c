#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates array
 * @size: size of array to create
 * @c: char to initialize with?
 * Return: char value
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int q;

	if (size <= 0)
		return (NULL);
	p = malloc(sizeof(char) * size);
	if (p == NULL)
		return (NULL);
	for (q = 0; q < size; q++)
		p[q] = c;

	return (p);
}
