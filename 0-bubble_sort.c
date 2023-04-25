#include "sort.h"
#include <stdbool.h>

/**
 * bubble_sort - sorting algorithm that swaps adjacent
 *		elements if they are in wrong order.
 * @array: pointer to the array to be sorted
 * @size: size of the array to be sorted
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	unsigned long int i;
	unsigned long int j;
	bool swapped;

	i = 0;

	do {
		swapped = false;
		for (j = 0; j < (size - 1 - i); j++)
		{
			if (array[j] > array[j + 1])
			{
				unsigned long int temp;

				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				swapped = true;
				print_array(array, size);
			}
		}
		i++;
	} while (swapped);
}
