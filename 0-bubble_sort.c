#include "sort.h"

/**
 * bubble_sort - function that sorts an array
 * of integers in ascending order using the
 * Bubble sort algorithm
 *
 * @array: input arrray
 * @size: size of the array
 * Return: no return
 */
void bubble_sort(int *array, size_t size)
{
	size_t iter, size_cp;
	int tmp, swap;

	for (size_cp = size, swap = 1; size_cp > 0 && swap; size_cp--)
	{
		swap = 0;
		for (iter = 0; (iter + 1) < size_cp; iter++)
		{
			if (array[iter] > array[iter + 1])
			{
				tmp = array[iter + 1];
				array[iter + 1] = array[iter];
				array[iter] = tmp;
				print_array(array, size);
				swap = 1;
			}
		}
	}
}
