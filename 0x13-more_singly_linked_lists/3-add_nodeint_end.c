#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to head pointer
 * @n: constant integer
 * Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newEnd = (listint_t *)malloc(sizeof(listint_t));

	if (!newEnd)
		return (NULL);
	newEnd->n = n;
	newEnd->next = NULL;
	if (!*head)
		*head = newEnd;
	else
	{
		listint_t *tail = *head;

		while (tail->next)
			tail = tail->next;
		tail->next = newEnd;
	}
	return (newEnd);
}
