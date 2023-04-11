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
	int q;

	for (q = 0; q < argc; q++)
	{
		printf("%s\n", argv[q]);
	}
	return (0);
}
