#include "main.h"

/**
 * _isalpha - checks alphabetic characters
 * @c: character
 * Return: 1 if letter
 * Return: 0 if not
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
