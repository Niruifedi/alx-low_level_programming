#include <stdio.h>
#include "lists.h"

/**
 * listint_len - Function return len
 * @h: pointer
 * Return: length of list
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h)
		h = h->next, i++;
	return (i);
}
