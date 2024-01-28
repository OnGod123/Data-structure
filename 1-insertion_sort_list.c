#include "sort.h"
#include <stdio.h>

/**
 * insertion_sort_list - Custom implementation of insertion sort for list
 * @list: A pointer to the head of the linked list
 *
 * Description: Implements a custom version of the Insertion Sort algorithm to
 *              sort the elements of the linked list using the insertion_sort_list function.
 */
void insertion_sort_list(listint_t **list)
{
    listint_t *current, *temp;

    if (!list)
        return;

    current = *list;

    while (current)
    {
        while (current->next && (current->n > current->next->n))
        {
            temp = current->next;
            current->next = temp->next;
            temp->prev = current->prev;

            if (current->prev)
                current->prev->next = temp;

            if (temp->next)
                temp->next->prev = current;

            current->prev = temp;
            temp->next = current;

            if (temp->prev)
                current = temp->prev;
            else
                *list = temp;

            print_list(*list);
        }
        current = current->next;
    }
}

