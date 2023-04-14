#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - checks malloc
 * @b: integer to check?
 * Return: a pointer or void
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);

	return (p);
}
