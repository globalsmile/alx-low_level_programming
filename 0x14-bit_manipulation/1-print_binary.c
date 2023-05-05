#include "main.h"
#include <stdio.h>
/**
 * print_binary - print binary representation of a number
 * @n: decimal number to print as binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int temp_decimal;
	int num_shifts;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (temp_decimal = n, num_shifts = 0; (temp_decimal >>= 1) > 0; num_shifts++)
		;

	for (; num_shifts >= 0; num_shifts--)
	{
		if ((n >> num_shifts) & 1)
			printf("1");
		else
			printf("0");
	}
}
