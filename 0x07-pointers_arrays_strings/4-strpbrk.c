#include "main.h"
/**
 * _strpbrk - entry
 * @s: input
 * @accept: input
 * Return: always 0
 */
char *_strpbrk(char *s, char *accept)
{
	int count;

	while (*s)
	{
		for (count = 0; accept[count]; count++)
		{
			if (*s == accept[count])
				return (s);
		}
		s++;
	}
	return ('\0');
}
