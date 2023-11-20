#include "lists.h"

/**
 * free_listint - A function that frees a linked list
 * @head: liste head
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
