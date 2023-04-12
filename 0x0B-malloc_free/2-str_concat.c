#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concats strings
 * @s1: string 1
 * @s2: string 2
 * Return: returns concated string
 */
char *str_concat(char *s1, char *s2)
{
	int p, lenght1, lenght2;
	char *concate;

	p = 0;
	lenght1 = 0;
	lenght2 = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[p] != '\0')
	{
		p++;
		lenght1++;
	}

	p = 0;

	while (s2[p] != '\0')
	{
		p++;
		lenght2++;
	}

	concate = malloc(sizeof(char) * (lenght1 + lenght2 + 1));
	if (concate == NULL)
		return (NULL);

	for (p = 0; p < lenght1; p++)
	{
		concate[p] = s1[p];
	}

	for (p = 0; p < lenght2; p++)
	{
		concate[p + lenght1] = s2[p];
	}
	concate[p + lenght1] = '\0';
	return (concate);
}
