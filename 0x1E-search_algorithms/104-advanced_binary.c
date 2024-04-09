#include <stdio.h>
#include "search_algos.h"

/**
 * advanced_binary - searches for an element in an array
 * @array: pointer to the first element in an array
 * @size: size of array
 * @value: element to search for
 * Return: index of value
 */

int advanced_binary(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;
	int mid;
	int i;

	if (array == NULL)
		return (-1);
	if (left > right)
		return -1;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i < right)
			printf(", ");
	}
	printf("\n");
	mid = left + (right - left) / 2;
	if (array[mid] == value)
	{
		if (array[mid - 1] == value)
			return (mid - 1);
		return (mid);
	}
	if (value < mid)
		right = mid - 1;
	if (value > mid)
		left = mid + 1;
	advanced_binary(array, size, value);
}
