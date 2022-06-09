#include "lists.h"

/**
 * add_dnodeint_end - adds new node at the end of prev nodes
 * @head: head node
 * @n: node value
 * Return: address of node or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *enode;
	dlistint_t *temp;

	enode = malloc(sizeof(dlistint_t));
	if (enode == NULL)
	{
		return (NULL);
	}
	enode->n = n;
	enode->prev = NULL;
	enode->next = NULL;

	if (*head == NULL)
	{
		*head = enode;
		enode->prev = NULL;
		return (enode);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = enode;
	enode->prev = temp;
	return (enode);
}
