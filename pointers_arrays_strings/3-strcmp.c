#include "main.h"

/**
 * _strcmp - differenciate
 * @s1: string
 * @s2: string
 * Return: difference
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int counter = 0;
	int temp;
	int len1 = strlen(s1);
	int len2 = strlen(s2);

	for (i = 0; (s1[i] != 0) && (s2[i] != 0); i++)
	{
		temp = s1[i] - s2[i];
		counter += temp;
	}
	if (temp < 0)
	{
		return (counter - 4);
	}
	else
	{
		return (counter + 4);
	}
}
