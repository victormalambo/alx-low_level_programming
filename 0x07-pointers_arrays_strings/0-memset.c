#include "main.h"
/**
 * _memset-will fill a block of memory with specified value
 * @b: the value to fill memory
 * @s: the address to be filled
 * @n: the number of bytes to be changed
 * Return: the changed array with new value
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
