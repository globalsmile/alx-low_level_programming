#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * is_valid_num - Check if the given string is a valid number
 * @number: string to check?
 * Return: 0 or 1
 */
int is_valid_num(const char *number)
{
	for (const char *c = number; *c != '\0'; c++)
	{
		if (!isdigit(*c))
		{
			return (0);
		}
	}
	return (1);
}
/**
 * multiply - Multiply two positive numbers
 * @number1: integer 1
 * @number2: integer 2
 * Return: Returns a dynamically allocated string
 */
char *multiply(const char *number1, const char *number2)
{
	int len1 = strlen(number1);
	int len2 = strlen(number2);
	int len_result = len1 + len2;
	int *result = calloc(len_result, sizeof(int));

	for (int i = len2 - 1; i >= 0; i--)
	{
		int carry = 0;
		int c2 = number2[i] - '0';

		for (int j = len1 - 1; j >= 0; j--)
		{
			int c1 = number1[j] - '0';
			int product = c1 * c2 + carry + result[i + j + 1];

			carry = product / 10;
			result[i + j + 1] = product % 10;
		}
		result[i] += carry;
	}

	int i = 0;

	while (i < len_result - 1 && result[i] == 0)
	{
		i++;
	}

	char *str_result = malloc(len_result - i + 1);

	for (int j = i; j < len_result; j++)
	{
		str_result[j - i] = result[j] + '0';
	}
	str_result[len_result - i] = '\0';

	free(result);

	return (str_result);
}
/**
 * main - entry point
 * @argc: count of arguments
 * @argv: pointer to an array of chars
 *Return: always 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3 || !is_valid_num(argv[1]) || !is_valid_num(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}
	const char *number1 = argv[1];
	const char *number2 = argv[2];
	char *result = multiply(number1, number2);

	printf("%s\n", result);
	free(result);

	return (0);
}
