#include "main.h"
/**
 * _strspn - length of prefix substring
 * @s: string to go through
 * @accept: accepted bytes
 * Return: returns usigned values
 */
unsigned int _strspn(char *s, char *accept)
{
	int p;
	int q;
	unsigned int result = 0;

	for (p = 0; s[p] != '\0'; p++)
	{
		for (q = 0; s[q] != '\0'; q++)
		{
			if (s[p] == accept[q])
			{
				result++;
				break;
			}
		}
		if (s[q] == '\0')
			return (result);
	}
	return (result);
}
