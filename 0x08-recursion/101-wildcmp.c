#include "main.h"
/**
 * findsrc - compare two strings with "wildcard expansion" capabilities
 * @s: string 1
 * @c: string 2
 * @a: integer 1
 * @b: integer 2
 * Return: 1 if strings can be considered identical, else 0
 */
int findsrc(char *s, char c, int a, int b)
{
	if (*(s + a) == '\0')
		return (b + 1);
	else if (*(s + a) == c || *(s + b) == '*')
		b = i;

	return (findsrc(s, c, a + 1, b));
}
/**
 * wildcmp - compare two strings with "wildcard expansion" capabilities
 * @s1: string 1
 * @s2: string 2
 * Return: 1 if strings can be considered identical, else 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s1 == '\0' || *s2 == '\0')
	{
		if (*s1 == '\0' && *s2 == '*')
			return (wildcmp(s1, ++s2));
		else if (*s1 == '*' && *s2 == '\0')
			return (wildcmp(++s1, s2));
		return (0);
	}

	if (*s1 == *s2)
	{
		return (wildcmp(++s1, ++s2));
	}
	else if (*s1 == '*')
	{
		if (*(s1 + 1) == '*')
			return (wildcmp(++s1, s2));
		else
		{
			return (wildcmp(s1, findsrc(s2, *(s1 + 1), 0, 0) + s2));
		}
	}
	else if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, ++s2));
		else
		{
			return (wildcmp(s1 + findsrc(s1, *(s2 + 1), 0, 0), s2));
		}
	}
	return (0);
}
