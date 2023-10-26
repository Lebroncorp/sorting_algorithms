#include "sort.h"

/**
 * pivot_sort - sorts an array based on a pivot point comparison
 * @array: given array
 * @lower: comparison descending point
 * @upper: comparison for ascending point
 */

void pivot_sort(int *array, int lower, int upper)
{
	int begin, end, temp;

	if (lower < upper)
	{
		begin = lower;
		end = upper;
		while (begin < end)
		{
			while (array[begin] < array[end])
				end--;
			if (begin < end)
			{
				temp = array[start];
				array[begin] = array[end];
				array[end] = temp;
				begin++;
				print_array(array, (size_t)upper + 1);
			}
			while (array[end] >= array[begin])
				begin++;
			if (begin < end)
			{
				temp = array[begin];
				array[begin] = array[end];
				array[end] = temp;
				end--;
			}
		}
		pivot_sort(array, lower, end - 1);
		pivot_sort(array, end + 1, upper);
	}
}

/**
 * quick_sort - sorts an array of integers in
 * ascending order using the Quick sort algorithm
 * @array: given array
 * @size: size of array
 */

void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;
	pivot_sort(array, 0, (int)size - 1);
}
