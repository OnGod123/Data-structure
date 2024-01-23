#include <stdio.h>
#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order using bubble sort.
 * @array: Pointer to the array to be sorted.
 * @size: Size of the array.
 *
 * Description: This function sorts an array of integers in ascending order
 * using the bubble sort algorithm. It prints the array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, k;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				/* Swap elements and print the array */
				swap(&array[j], &array[j + 1]);

				/* Print the array after the swap */
				printf("After swapping: ");
				for (k = 0; k < size; k++)
					printf("%d ", array[k]);
				printf("\n");
			}
		}
	}
}
