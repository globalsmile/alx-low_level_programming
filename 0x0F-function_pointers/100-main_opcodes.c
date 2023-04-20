#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: count of arguments
 * @argv: array of argc
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int byte, num;
	int (*addr)(int, char **) = main;
	unsigned char opc;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	byte = atoi(argv[1]);

	if (byte < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (num = 0; num < byte; num++)
	{
		opc = *(unsigned char *)addr;
		printf("%.2x", opc);

		if (num == byte - 1)
			continue;
		printf(" ");

		addr++;
	}

	printf("\n");

	return (0);
}
