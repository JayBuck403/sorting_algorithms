#include "sort.h"

/**
 *
 */

void selection_sort(int *array, size_t size)
{
	unsigned long int i;
	unsigned long int j;

	for (i = 0; i < size - 1; i++)
	{
		unsigned long int min_position;
		min_position = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_position])
			{
				min_position = j;
			}
		}
		if (min_position != i)
		{
			unsigned long int temp;
			temp = array[i];
			array[i] = array[min_position];
			array[min_position] = temp;
			print_array(array, size);
		}
	}
}
