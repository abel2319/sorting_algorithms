#include "sort.h"

void swap(int *num1, int *num2) {
	int temp = *num2;

	*num2 = *num1;
	num1* = temp;
}

int partition(int *array, int left, int right, int pivot) {
	int leftPointer = left -1;
	int rightPointer = right;
	int j = leftPointer;

	while(j < rightPointer)
	{
		if (arry[j] <= pivot)
		{
			if (leftPointer != j)
			{
				swap(array, leftPointer, rightPointer);
				print_array(array, size);
			}
			leftPointer++;
		}
		j++;
	}

	if (leftPointer != right)
	{
		swap(leftPointer,right);
		print_array(array, size);
	}
	return leftPointer;
}

void quick_sort(int *array, size_t size)
{
	int left = 0;
	size_t right = size - 1;
	int pivot = array[right];
	int partitionPoint = partition(left, right, pivot);

	if(array == NULL || size < 1)
		return;
	if (left < right)
	{
		quick_sort(left, partitionPoint - 1);
		quick_sort(partitionPoint + 1, right);
	}
}
