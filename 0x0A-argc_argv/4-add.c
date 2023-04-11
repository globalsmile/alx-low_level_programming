#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define UNUSED(p) (void)(p)
/**
 * StringChecker - checks the array for a string
 * @k: string to check
 * Return: boolean
 */
int StringChecker(char *k)
{
	int j = 0;

	for (; k[j] != '\0'; j++)
	{
		if (!isdigit(k[j]))
		{
			return (0);
		}
	}
	return (1);
}
/**
 * main - entry point
 * @argc: count of arguments
 * @argv: pointer to an array of chars
 * Return: always 0
 */
int main(int argc, char  *argv[])
{
	int j;
	int res = 0;

	if (argc > 1)
	{
		for (j = 1; j < argc; j++)
		{
			if (StringChecker(argv[j]))
			{
				res += atoi(argv[j]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", res);
		return (0);
	}
	else
	{
		printf("%d\n", 0);
		return (1);
	}

}
