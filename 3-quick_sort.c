#include "sort.h"

void divide(int beg, int pivot, int *i, size_t size);
int partition(int beg, int pivot, int *i, size_t size);
void switch_int(int *a, int *b);

/**
 * quick_sort - sorts an array of integers in
 * ascending order using the Quick sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 */

void quick_sort(int *array, size_t size)
{
	int begin = 0, pivot;

	if (array && size > 1)
	{
		pivot = (size - 1);
		divide(begin, pivot, array, size);
	}
}
/**
* divide - recursively partition
* @begin: beginning of divided array
* @pivot: end of divided array
* @start: the beginning of the array
* @size: size of array
**/

void divide(int begin, int pivot, int *start, size_t size)
{
	int first, second, np;

	if (begin < pivot)
	{
		second = partition(begin, pivot, start, size);
		first = begin;
		np = second - 1;
		if (first != np && second != pivot)
			np--;
		divide(first, np, start, size);
		divide(second, pivot, start, size);
	}
}

/**
* partition - divides an array
* @beg: beginning of array separated
* @pivot: end of array separated
* @start: the beginning of array
* @size: size of array
* Return: the new beginning
**/

int partition(int begin, int pivot, int *start, size_t size)
{
	int temp;

	temp = begin;
	while (temp != pivot)
	{
		if (start[temp] < start[pivot])
		{
			if (temp != begin)
			{
				switch_int(start + temp, start + begin);
				print_array(start, size);
			}
			temp++;
			begin++;
		}
		else
			temp++;
	}
	if (begin != pivot)
	{
		if (start[begin] > start[pivot])
		{
			switch_int(start + pivot, start + begin);
			print_array(start, size);
		}
		begin++;
	}
	return (begin);
}

/**
  * switch_int - switches the values of two integers
  * @a: int to be swapped
  * @b: int to be swapped
  */

void switch_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
