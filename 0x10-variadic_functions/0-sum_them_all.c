#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum all args
 * @n: integers to sum
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list argt;
	unsigned int p = 0;
	int total = 0;

	if (n != 0)
	{
		va_start(argt, n);

		while (p < n)
		{
			total += va_arg(argt, int);
			p++;
		}

		va_end(argt);
		return (total);
	}

	return (0);
}
