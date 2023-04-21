#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @separator: seperator char
 * @n: const var
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list argt;
	unsigned int p = 0;

	if (n > 0)
	{
		va_start(argt, n);

		while (p < n)
		{
			printf("%d", va_arg(argt, int));

			if (p != n - 1  && separator != NULL)
				printf("%s", separator);

			p++;
		}
		va_end(argt);
	}
	printf("\n");
}
