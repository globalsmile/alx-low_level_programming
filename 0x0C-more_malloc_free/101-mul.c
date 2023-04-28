#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int multiply(char* number1, char* number2);

int main(int argc, char* argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	char* num1 = argv[1];
	char* num2 = argv[2];

	for (int i = 0; num1[i] != '\0'; i++)
	{
		if (!isdigit(num1[i]))
		{
			printf("Error\n");
			exit(98);
        	}
	}
	for (int i = 0; num2[i] != '\0'; i++)
	{
		if (!isdigit(num2[i]))
		{
		printf("Error\n");
		exit(98);
		}
	}
	int result = multiply(num1, num2);
	printf("%d\n", result);
	return (0);
}

int multiply(char* num1, char* num2)
{
	int len1 = strlen(num1);
	int len2 = strlen(num2);
	int* result = calloc(len1 + len2, sizeof(int));
	
	for (int i = len1 - 1; i >= 0; i--)
	{
		for (int j = len2 - 1; j >= 0; j--)
		{
			int prod = (num1[i] - '0') * (num2[j] - '0');
			int sum = result[i + j + 1] + prod;

			result[i + j] += sum / 10;
			result[i + j + 1] = sum % 10;
		}
	}
	int i = 0;
	
	while (i < len1 + len2 && result[i] == 0)
		i++;
	
	int res = 0;

	while (i < len1 + len2)
	{
		res = res * 10 + result[i];
		i++;
	}
	free(result);
	return (res);
}
