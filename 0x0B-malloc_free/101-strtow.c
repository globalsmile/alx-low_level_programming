#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * helper - helps function
 * @word: wordcount
 * @len: length
 * @str: string to go through
 * @s: array you are assigning
 * Return: char value
 */
char **helper(int wordly, int len, char *str, char **s)
{
	int p, r, q;

	q = 0;
	for (p = 0; p < wordly; p++)
	{
		r = 0;
		for (; q < len; q++)
		{
			if (str[0] != ' ' || str[q] != ' ')
			{
				s[p][r] = str[q];
				r++;
			}
			if (q != 0 && str[q] == ' ' && str[q - 1] != ' ')
			{
				q++;
				break;
			}
		}
		s[p][r + 1] = '\0';
	}
	s[word + 1] = NULL;
	return (s);
}
/**
 * strtow - string to words
 * @str: string to check
 * Return: return char value
 */
char **strtow(char *str)
{
	int length, p, q, sizes, r, words;
	char **st;

	if (str == NULL)
		return (NULL);
	length = 0;
	words = 0;
	while (str[length] != '\0')
	{
		if (str[0] != ' ')
		words++;
		if (str[length] != ' ' && str[length - 1] == ' ' && length != 0)
			words++;
		length++;
	}
	st = (char **)malloc(sizeof(char *) * words + 1);
	if (st == NULL)
		return (NULL);
	q = 0;
	for (p = 0; p < words; p++)
	{
		sizes = 0;
		for (; q < length; q++)
		{
			if (str[0] != ' ' || str[q] != ' ')
				sizes++;
			if (str[q] == ' ' && sizes > 0)
				break;
		}
		printf("%d\n", sizes);
		st[p] = (char *)malloc(sizeof(char) * sizes + 1);
		if (st[p] == NULL)
		{
			for (r = p - 1; r >= 0; r--)
				free(st[r]);
			free(st);
		}
	}
	st = helper(words, length, str, st);
	return (st);
}
