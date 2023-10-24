#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to head pointer
 * @idx: index where to add the new node
 * @n: integer value for the new node
 * Return: the address of the new node or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int counter = 0;
	listint_t *current = *head;

	if (idx == 0)
	{
		listint_t *newNode = (listint_t *)malloc(sizeof(listint_t));

		if (!newNode)
			return (NULL);
		newNode->n = n;
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	while (current)
	{
		if (counter + 1 == idx)
		{
			listint_t *newNode = (listint_t *)malloc(sizeof(listint_t));

			if (!newNode)
				return (NULL);
			newNode->n = n;
			newNode->next = current->next;
			current->next = newNode;
			return (newNode);
		}
		current = current->next;
		counter++;
	}
	return (NULL);
}
