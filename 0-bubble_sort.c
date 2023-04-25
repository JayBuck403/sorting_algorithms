#include "sort.h"

/**
 * bubble_sort - sorting algorithm that swaps adjacent
 *		elements if they are in wrong order.
 * @array: pointer to the array to be sorted
 * @size: size of the array to be sorted
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	long unsigned int i;
	long unsigned int j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < (size - 1); j++)
		{
			if (array[j] > array[j + 1])
			{
				long unsigned int temp;

				temp = array[i];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
