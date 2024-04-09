#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - searches for an element linearly
 * @array: pointer to the first element of an array
 * @size: size of array
 * @value: value to search for
 * Return: index of value
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
