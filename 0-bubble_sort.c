#include "sort.h"

void bubble_sort(int *array, size_t size)
{
	size_t a, b;
	int temp;

	if (size < 2)
		return;
	for (a = 0; a < size; a++)
	{
		for (b = 0; b < a - 1; b++)
		{
			if (array[b] > array[b + 1])
			{
				temp = array[b];
				array[b] = array[b + 1];
				array[b + 1] = temp;
				print_array(array, size);
			}
		}

	}
}
