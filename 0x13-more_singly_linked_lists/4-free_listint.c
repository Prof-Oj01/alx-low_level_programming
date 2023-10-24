#include "lists.h"

/**
 * free_listint - function that frees a singly linked list
 * @head: pointer to the first node of list
 * Return: no return
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);
	}
}
