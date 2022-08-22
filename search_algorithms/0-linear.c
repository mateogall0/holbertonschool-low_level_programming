#include "search_algos.h"

/**
 * linear_search - linear search algorithm
 * @array: array oy ints
 * @size: size of array
 * @value: int
 * Return: int
 */

int linear_search(int *array, size_t size, int value)
{
	int i;

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
