#include "main.h"

/**
 * jack_bauver - 24
 * @i: hours
 * @j: mins
 * Return: 0
 */

void jack_bauer(void)
{
	int i, j;
	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			if (i < 10)
			{
				_putchar(0 + '0');
			}
			_putchar(i + '0');
			_putchar(':');
			if (j < 10)
			{
				_putchar(0 + '0');
			}
			putchar(j + '0');
			putchar(10);
		}
	}
}
