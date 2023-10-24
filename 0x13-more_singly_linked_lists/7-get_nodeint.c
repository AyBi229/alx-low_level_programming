#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: head pointer
 * @index: unsigned integer
 * Return: the nth node of a listint_t linked list or NULL if it doesn't exist
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	while (head && counter < index)
	{
		head = head->next;
		counter++;
	}
	return ((counter == index) ? head : NULL);
}
