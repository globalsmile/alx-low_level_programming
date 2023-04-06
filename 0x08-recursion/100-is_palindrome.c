#include "main.h"
/**
 * lengthy - helps do it
 * @s: string
 * Return: string length
 */
int lengthy(char *s)
{
	int k = 0;

	if (*s)
	{
		k = k + length(s + 1);
		return (k += 1);
	}
	return (0);
}
/**
 * helper2 - helps more
 * @p: integer p
 * @s: string
 * Return: int value
 */
int helper2(int p, char *s)
{
	if (*s)
	{
		if (*s != s[length(s) - p])
		{
			return (0);
		}
		else
		{
			return (helper2(p + 1, s + 1));
		}
	}
	return (1);
}
/**
 * is_palindrome - is it palindrome
 * @s: string to check
 * Return: boolean
 */
int is_palindrome(char *s)
{
	int q = 1;

	return (helper2(q, s));
}
