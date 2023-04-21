#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints a string
 * @separator: seperator char
 * @n: number of args
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list argt;
	unsigned int p = 0;
	char *string;

	if (n > 0)
	{
		va_start(argt, n);

		while (p < n)
		{
			string = va_arg(argt, char *);
			if (string == NULL)
				printf("%s", "(nil)");
			else
				printf("%s", string);

			if (p != n - 1 && separator != NULL)
				printf("%s", separator);

			p++;
		}

		va_end(argt);
	}

	printf("\n");
}
