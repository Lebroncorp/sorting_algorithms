#include "sort.h"

void switch_int(int *a, int *b);

/**
* selection_sort - a function that sorts an array of
* integers in ascending order using the selection sort algorithm
* @array: array of integers
* @size: size of array
**/

void selection_sort(int *array, size_t size)
{
	size_t a, b;
	int *temp;

	temp = NULL;
	for (a = 0; array && a < size - 1; a++)
	{
		temp = NULL;
		for (b = a + 1; b < size; b++)
		{
			if (array[b] < array[a])
			{
				if (temp && array[b] < *temp)
					temp = &array[b];
				if (!temp)
					temp = &array[b];
			}
		}
		if (temp)
		{
			switch_int(temp, &array[a]);
			print_array(array, size);
		}
	}
}

/**
* switch_int - switches the values of two integers
* @a: take an int
* @b: take an int
**/

void switch_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
