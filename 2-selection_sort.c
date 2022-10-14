#include "sort.h"


/**
 * selection_sort - function that sorts an array of integers in
 * ascending order using the Selection sort algorithm
 *
 * @array: array to sort
 * @size: size if array
 */
void selection_sort(int *array, size_t size)
{
	int tmp;
	unsigned long int i, j, min_idx;

	if (array != NULL || size < 2)
	{
		for (i = 0; i < size - 1; i++)
		{
			min_idx = i;
			for (j = i + 1; j < size; j++)
				if (array[j] < array[min_idx])
					min_idx = j;
			if (min_idx != i)
			{
				tmp = array[min_idx];
				array[min_idx] = array[i];
				array[i] = tmp;
				print_array(array, size);
			}
		}
	}
}
