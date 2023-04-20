#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - entry point
 * @argc: count of arguments
 * @argv: array of args
 * Return: return int
 */
int main(int argc, char *argv[])
{
	if (argc == 4)
	{
		int p;
		int q;
		int (*func)(int, int);

		p = atoi(argv[1]);
		q = atoi(argv[3]);
		func = get_op_func(argv[2]);
		if ((*argv[2] == '%' || *argv[2] == '/') && q == 0)
		{
			printf("Error\n");
			exit(100);
		}
		printf("%d\n", func(p, q));
		return (0);
	}
	printf("Error\n");
	exit(98);
}
