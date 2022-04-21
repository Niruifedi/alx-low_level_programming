#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - print all elements of a list_t list
 * @h: singly linked list to print
 * Return: number of node in the list
 */

size_t print_list(const list_t *h)
{
	size_t nodes;

	for (nodes = 0; h; nodes++)

	if (h == NULL)
	{
		printf("[0] (nil)");
	}
	else
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (nodes);
}
