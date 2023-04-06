#include "main.h"
/**
 * helper -  checks to see if i'm right.
 * @k: integer to guess
 * @j: integer to get root of
 * Return: value of root
 */
int helper(int k, int j)
{
	int p;

	if (k * k != j)
	{
		if (k > j)
		{
			return (-1);
		}
		j = helper(k + 1, j);
		return (p + 1);
	}
	return (0);
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: integer to return
 * Return: square root of a number
 */
int _sqrt_recursion(int n)
{
	int q = 0;

	if (helper(q, n) == n && n != 1)
		return (-1);
	return (helper(q, n));

}
