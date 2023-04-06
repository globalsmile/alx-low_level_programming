#include "main.h"
/**
 * helper - does it for me.
 * @k: aux integer.
 * @j: integer to test.
 * Return: always 1.
 */
int helper(int k, int j)
{
	if (j % k == 0 && j != k)
		return (0);
	if (j % k != 0 && k < j)
		return (helper(k + 1, j));
	return (1);
}
/**
 * is_prime_number - return prime number.
 * @n: integer to compare
 * Return: boolean
 */
int is_prime_number(int n)
{
	int p = 2;

	if (n < 2)
		return (0);
	return (helper(p, n));
}
