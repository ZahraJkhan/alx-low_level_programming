#include <stdio.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h

/**
 * print_listint - Prints all the elemnts of a list
 * @h: list to print
 *
 * Return: The no of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
