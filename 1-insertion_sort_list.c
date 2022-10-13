#include "sort.h"

/**
 * insertion_sort_list - function that sorts a doubly linked list of
 * integers in ascending order using the Insertion sort algorithm
 *
 * @list: the list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *tmp1 = NULL;
	listint_t *tmp2 = NULL;
	listint_t *tmp3 = NULL;
	int i;

	if (list != NULL || *list != NULL || (*list)->next != NULL)
	{
		tmp1 = (*list)->next;
		while (tmp1)
		{
			tmp2 = tmp1->prev;
			tmp3 = tmp1;
			i = tmp3->n;
			while (tmp2 && tmp2->n > i)
			{
				tmp3->prev = tmp2->prev;
				tmp2->prev = tmp3;
				tmp2->next = tmp3->next;
				tmp3->next = tmp2;
				if (tmp2->next != NULL)
					tmp2->next->prev = tmp2;

				if (tmp2->prev == tmp1)
					tmp1 = tmp2;

				if (tmp3->prev == NULL)
					*list = tmp3;
				else
					tmp3->prev->next = tmp3;

				tmp2 = tmp3->prev;
				print_list(*list);
			}
			tmp1 = tmp1->next;
		}
	}
}
