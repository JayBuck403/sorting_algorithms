#include "sort.h"

/**
 * bubble_sort - sorting algorithm that swaps adjacent
 * 		elements if they are in wrong order.
 * @array: pointer to the array to be sorted
 * @size: size of the array to be sorted
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	int i;
	int j;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (*array[j] > *array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
			}
		}
	}
}
