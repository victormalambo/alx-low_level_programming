#include "main.h"
/**
 * print_chessboard - entry
 * @a: array
 * Return: always 0
 */
void print_chessboard(char (*a)[8])
{
	int count;
	int i;

	for (count = 0; count < 8; count++)
	{
		for (i = 0; i < 8; i++)
			_putchar(a[count][i]);
		_putchar('\n');
	}
}
