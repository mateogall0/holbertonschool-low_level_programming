#include "search_algos.h"

/**
 * print - prints the array
 * @array: array of ints
 * @b: beggining
 * @f: final
 */

void print(int *array, int b, int f)
{
	int i = 0;

	printf("Searching in array: ");
	for (i = b; i < f; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("%d", array[i]);
	putchar(10);
}

/**
 * binary_search - binary search algorithm
 * @array: array of ints
 * @size: size of array
 * @value: int
 * Return: int
 */

int binary_search(int *array, size_t size, int value)
{
	int b = 0, f = (int)size - 1, mid = 0;

	while (array && b <= f)
	{
		print(array, b, f);
		mid = (b + f) / 2;
		if (array[mid] == value)
			return (mid);
		if (value < array[mid])
			f = mid - 1;
		else if (value > array[mid])
			b = mid + 1;
	}
	if (array[mid] == value)
		return (mid);
	return (-1);
}
