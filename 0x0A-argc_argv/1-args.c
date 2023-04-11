#include "main.h"
#include <stdio.h>
#define UNUSED(p) (void)(p)
/**
 * main - entry point
 * @argc: count of arguments
 * @argv: pointer to an array of chars
 *Return: always 0
 */
int main(int argc, char  *argv[])
{
	UNUSED(argv);
	printf("%d\n", argc - 1);
	return (0);
}
