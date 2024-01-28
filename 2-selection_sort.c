#include "sort.h"

/**
 * selection_sort - Custom implementation of selection sort for array
 * @array: input array of integers
 * @size: size of the array
 *
 * Description: Implements a custom version of the Selection Sort algorithm to
 *              sort the elements of the array using the selection_sort function.
 */
void selection_sort(int *array, size_t size)
{
    int temp;
    size_t i, j, min_index;

    for (i = 0; i < size; i++)
    {
        min_index = i;

        for (j = i + 1; j < size; j++)
        {
            if (array[min_index] > array[j])
                min_index = j;
        }

        if (i != min_index)
        {
            temp = array[i];
            array[i] = array[min_index];
            array[min_index] = temp;
            print_array(array, size);
        }
    }
}

