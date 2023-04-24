#include "sort.h"

/**
 * swap - swaps two elements
 * @x: first element
 * @y: second element
 * Return: void
 */

void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	x = y;
	y = temp;
}
