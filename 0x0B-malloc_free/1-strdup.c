#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - duplicates string
 * @str: string to copy
 * Return: char to newly duplicated string
 */
char *_strdup(char *str)
{
	int p;
	int q = 0;
	char *r;

	if (str == NULL)
		return (NULL);

	while (str[q] != '\0')
		q++;

	r = malloc(sizeof(char) * q + 1);

	if (r == NULL)
		return (NULL);

	for (p = 0; p < q; p++)
		r[p] = str[p];

	return (r);

}
