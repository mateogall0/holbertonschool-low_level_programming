#include "main.h"

/**
 * _strspn - string prefix substring
 * @s: string
 * @accept: string
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int j = 0;

	for (i = 0; accept[i]; i++)
	{
		if (s[j] == accept[i])
		{
			j++;
			break;
		}
		else if (accept[i + 1] == 0)
		{
			return (j);
		}
		s++;
	}
	return (count);
}
