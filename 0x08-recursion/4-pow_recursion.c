#include "main.h"
/**
 * _pow_recursion - return value of x raised to y
 * @x: value to raise another value
 * @y: power to be raised
 * Return: result of the power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
