#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: head pointer
 * Return: void
*/
void free_listint(listint_t *head)
{
	while (head)
	{
		listint_t *temp = head;

		head = head->next;
		free(temp);
	}
}
