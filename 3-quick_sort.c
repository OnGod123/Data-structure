#include "sort.h"

/**
 * quick_sort - Custom implementation of quick sort for array
 * @array: Input array of integers
 * @size: Size of the array
 *
 * Description: Implements a custom version of the Quick Sort algorithm to
 *              sort the elements of the array using the quick_sort function.
 */
void quick_sort(int *array, size_t size)
{
    custom_qsort(array, 0, size - 1, size);
}

/**
 * qsort - Auxiliary function for the custom_quick_sort function
 * @a: Input array
 * @low: Index for the first element
 * @high: Index for the last element
 * @size: Size of the array
 *
 * Description: Implements a custom version of the Quick Sort algorithm.
 */
void qsort(int *a, int low, int high, int size)
{
    int pivot, wall, i;
    int temp;

    if (low < high)
    {
        pivot = high;
        wall = low;

        for (i = low; i < high; i++)
        {
            if (a[i] < a[pivot])
            {
                if (i != wall)
                {
                    temp = a[i];
                    a[i] = a[wall];
                    a[wall] = temp;
                    print_array(a, size);
                }
                wall++;
            }
        }

        if (wall != pivot && a[wall] != a[pivot])
        {
            temp = a[wall];
            a[wall] = a[pivot];
            a[pivot] = temp;
            print_array(a, size);
        }

        custom_qsort(a, low, wall - 1, size);
        custom_qsort(a, wall + 1, high, size);
    }
}

