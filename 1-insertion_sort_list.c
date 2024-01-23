#include <stdio.h>
#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in ascending order
 * @list: Pointer to the head of the doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
   	 if (list == NULL || *list == NULL)
	{
        	return;
	}
    
    listint_t *current;
    listint_t *next;
    listint_t *tempNext;
   listint_t *tempPrev;

    
    current = *list;
    next = NULL;

    while (current != NULL)
    {
        next = current->next;

        while (current->prev != NULL && current->n < current->prev->n)
        {
            tempNext = current->next;
            tempPrev = current->prev;

            if (tempNext != NULL)
            {
                tempNext->prev = tempPrev;
                current->next = tempPrev;
                current->prev = tempPrev->prev;
                current->next->prev = current;
            }
            else
            {
                tempPrev->next = current;
                current->prev = tempPrev->prev;
                current->next = tempPrev;
                tempPrev->prev = current;

                *list = current;
            }

            
            print_list(*list);
        }

        current = next;
    }
}

