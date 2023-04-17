#include "main.h"
/**
 * _pow_recursion - return value of a raised to b
 * @a: value to raise another value
 * @b: power to be raised
 * Return: result of the power
 */
int _pow_recursion(int a, int b)
{
	if (b < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (a * _pow_recursion(a, b - 1));
}
