#include "list.h"
/*
 * print_listint - printd all the elements of a listint_t list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nNodes = 0;

	while (h)
	{
		nNodes++;
		printf("%d -> ", h->n);
		h = h->next;
	}
	printf("NULL");
	return (nNodes);
}
