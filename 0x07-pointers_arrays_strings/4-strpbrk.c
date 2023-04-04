#include "main.h"
/**
 * _strpbrk - finds string
 * @s: string to find stuff
 * @accept: accepting arrays
 *
 * Return: returns new value
 */
char *_strpbrk(char *s, char *accept)
{
	int p;
	int q;

	for (p = 0; s[p] != '\0'; p++)
	{
		for (q = 0; accept[q] != '\0'; q++)
		{
			if (s[p] == accept[q])
			{
				return (s + p);
			}
		}
	}
	return (0);
}
