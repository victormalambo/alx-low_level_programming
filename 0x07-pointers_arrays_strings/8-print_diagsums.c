#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - entry
 * @a: input
 * @size: input
 * Return: always 0
 */
void print_diagsums(int *a, int size)
{
	int sum = 0;
	int sum1 = 0;
	int y;

	for (y = 0; y < size; y++)
	{
		sum = sum + a[y * size + y];
	}

	for (y = size - 1; y >= 0; y--)
	{
		sum1 += a[y * size + (size - y - 1)];
	}

	printf("%d, %d\n", sum, sum1);
}
