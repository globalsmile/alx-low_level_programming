#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the min number of coins to make change for an amount of money
 * @argc: argument count
 * @argv: argument vector, array of strings
 * Return: 1 if error, 0 otherwise
 */

int main(int argc, char *argv[])
{
	int money, counter;
	unsigned int j;
	char *p;
	int coin[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	money = strtol(argv[1], &p, 10);
	counter = 0;

	if (!*p)
	{
		while (money > 1)
		{
			for (j = 0; j < sizeof(coin[j]); j++)
			{
				if (money >= coin[j])
				{
					counter += money / coin[j];
					money = money % coin[j];
				}
			}
		}
		if (money == 1)
			counter++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", counter);
	return (0);
}
