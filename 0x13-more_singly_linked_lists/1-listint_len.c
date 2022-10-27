#include <stdio.h>
#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked listint_t list
 * @h: The no of nodes
 *
 * Return: no of elements in the listint
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != Null)
	{
		count++;
		h = h->next;
	}
	return (count);
}
