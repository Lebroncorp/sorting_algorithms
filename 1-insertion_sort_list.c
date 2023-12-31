#include "sort.h"

/**
 * insertion_sort_list -  sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 * @list: given list to sort
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *pn, *nn, *temp;

	if (list && *list && (*list)->next)
	{
		temp = (*list)->next;
		pn = temp->prev;
		nn = temp->next;

		while (temp)
		{
			if (temp->n < pn->n)
			{
				swap_list(pn, temp, nn, list);
			}
			temp = nn;
			if (temp)
			{
				nn = temp->next;
				pn = temp->prev;
			}
		}
	}
}

/**
 * swap_list - swaps the position of two nodes in a linked list
 * @pn: previous node
 * @temp: temp
 * @nn: next node
 * @h: head of list
 */

void swap_list(listint_t *pn, listint_t *temp, listint_t *nn, listint_t **h)
{

	while (pn && temp->n < pn->n)
	{
		if (nn)
			nn->prev = pn;
		temp->next = pn;
		temp->prev = pn->prev;
		if (pn->prev)
			(pn->prev)->next = temp;
		pn->prev = temp;
		pn->next = nn;
		nn = pn;
		pn = temp->prev;
		if ((*h)->prev)
			*h = (*h)->prev;
		print_list(*h);
	}
}
