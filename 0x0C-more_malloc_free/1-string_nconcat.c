#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concats strings
 * @s1: string one
 * @s2: string two
 * @n: n amount of bytes
 * Return: return a char val
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int p, length1, length2;
	char *q;

	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";

	length1 = 0;
	length2 = 0;
	while (s2[length2] != '\0')
		length2++;
	while (s1[length1] != '\0')
		length1++;

	if (n >= length2)
		n = length2;

	q = malloc(sizeof(char) * n + length1 + 1);
	if (q == NULL)
		return (NULL);

	for (p = 0; p < length1; p++)
		q[p] = s1[p];

	for (p = 0; p < n; p++)
		q[p + length1] = s2[p];

	q[p + length1] = '\0';

	return (q);
}
