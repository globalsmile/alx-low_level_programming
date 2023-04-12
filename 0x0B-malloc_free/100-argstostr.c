#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - gives array of args
 * @ac: argument count
 * @av: array of arguments
 * Return: char value
 */
char *argstostr(int ac, char **av)
{
	int sizes;
	char *st;
	int p;
	int q;
	int r;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (p = 0; p < ac; p++)
	{
		for (q = 0; av[p][q] != '\0'; q++)
			sizes++;
	}

	sizes += (ac + 1);
	st = malloc(sizeof(char) * sizes);
	if (st == NULL)
		return (NULL);
	r = 0;
	for (p = 0; p < ac; p++)
	{
		for (q = 0; av[p][q] != '\0'; q++)
		{
			st[r] = av[p][q];
			r++;
		}
		st[r] = '\n';
		r++;
	}

	st[r] = '\0';

	return (st);
}
