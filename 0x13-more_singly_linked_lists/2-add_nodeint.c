#include <stdlib.h>
#include "lists.h"

/**
 * *add_nodeint - Adds a new node at the beginning of a listint_t list
 * @head: double ptr to the beg of listint list
 * @n: integer to add to the list
 *
 * Return: address of new elemnt else NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
