#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - adds 2 integers
 * @a: int a
 * @b: int b
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtracts 2 integers
 * @a: int a
 * @b: int b
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies 2 integers
 * @a: int a
 * @b: int b
 * Return: 2
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides 2 integers
 * @a: int a
 * @b: int b
 * Return: division of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - modulos
 * @a: int a
 * @b: int b
 * Return: remainder of the division of a by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
