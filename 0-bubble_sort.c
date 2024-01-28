#include <stdio.h>
#include <sort.h>
/**
 * custom_bubble_sort - Sorts an array of integers in ascending order
 * @array: The array to be sorted
 * @size: The size of the array
 *
 * Description: Implements the Bubble Sort algorithm to
 *              sort the elements of the array.
 */
void custom_bubble_sort(int *array, size_t size)
{
    size_t i, size_cp;
    int temp, did_swap;

    for (size_cp = size, did_swap = 1; size_cp > 0 && did_swap; size_cp--)
    {
        did_swap = 0;
        for (i = 0; (i + 1) < size_cp; i++)
        {
            if (array[i] > array[i + 1])
            {
                temp = array[i + 1];
                array[i + 1] = array[i];
                array[i] = temp;
                print_array(array, size);
                did_swap = 1;
            }
        }
    }
}

