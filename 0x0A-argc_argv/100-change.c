#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - entry point
 * @argc: count of arguments
 * @argv: pointer to an array to chars
 * Return: always 0
 */
int main(int argc, char  *argv[])
{
	int n_coins = 0;
	int sum_m;

	if (argc == 2)
	{
		if (strchr(argv[argc - 1], '-'))
		{
			printf("0\n");
			return (1);
		}

		sum_m = atoi(argv[argc - 1]);

		while (sum_m > 0)
		{
			if (sum_m % 25 == 0)
			{
				sum_m -= 25;
			} else if (sum_m % 10 == 0)
			{
				sum_m -= 10;
			} else if (sum_m % 5 == 0)
			{
				sum_m -= 5;
			} else if (sum_m % 2 == 0)
			{
				sum_m -= 2;
			} else
			{
				sum_m--;
			}
			n_coins++;
		}
		printf("%d\n", n_coins);
		return (0);
	}
	printf("Error\n");
	return (1);
}
