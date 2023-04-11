#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: count of argumnets
 * @argv: pointer to an array of chars
 * Return: always 0
 */
int main(int argc, char  *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	int result = num1 * num2;

	if (argc == 3)
	{
		printf("%d\n", result);
		return (0);
	}
	else
		printf("Error\n");
	return (1);
}
