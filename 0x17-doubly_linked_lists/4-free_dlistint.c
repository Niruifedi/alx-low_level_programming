#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: head of node
 * Return: 0 on success
 */
void free_dlistint(dlistint_t *head)
{
	free(head);
}
