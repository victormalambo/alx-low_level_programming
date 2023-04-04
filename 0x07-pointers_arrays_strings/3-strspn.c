#include "main.h"
/**
 * _strspn - entry
 * @s: input
 * @accept: input
 * Return: always 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int num;

	while (*s)
	{
		for (num = 0; accept[num]; num++)
		{
			if (*s == accept[num])
			{
				n++;
				break;
			}
			else if (accept[num + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
