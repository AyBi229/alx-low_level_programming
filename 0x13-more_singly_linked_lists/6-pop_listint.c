#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to head pointer
 * Return: the head node’s data (n) or 0 if empty
*/
int pop_listint(listint_t **head)
{
	int nTemp;
	listint_t *temp;

	if (!(*head))
		return (0);
	nTemp = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (nTemp);
}
