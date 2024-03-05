#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm.
 * @list: Pointer to the head of the doubly linked list.
 */
void insertion_sort_list(listint_t **list)
{
    if (list == NULL || *list == NULL)
        return;

    listint_t *current;
	listint_t *sorted;
	listint_t *temp;

    current = (*list)->next;

    while (current != NULL)
    {
        sorted = current->prev;
        temp = current->next;

        while (sorted != NULL && sorted->n > current->n)
        {
            if (sorted->prev != NULL)
                sorted->prev->next = current;
            else
                *list = current;

            if (current->next != NULL)
                current->next->prev = sorted;

            sorted->next = current->next;
            current->prev = sorted->prev;
            current->next = sorted;
            sorted->prev = current;

            print_list(*list);
            sorted = current->prev;
        }

        current = temp;
    }
}

