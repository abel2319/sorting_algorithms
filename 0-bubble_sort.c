#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers in
 * ascending order using the Bubble sort algorithm
 *
 * @array: array to sort
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	int i, j, tmp;

	if ((array != NULL) && (size > 0))
	{
		for (i = 0; i < (size - 1); i++)
			for (j = 0; j < (size - i - 1); j++)
				if (arr[j] > arr[j+1])
				{
					tmp = array[j];
					array[j] = array[j + 1];
					arr[j+1] = tmp;
				}
	}
}
