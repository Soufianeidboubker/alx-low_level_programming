#include "lists.h"
/**
 * add_dnodeint - adds a old node at the beginning
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the old element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *old;
	dlistint_t *h;

	old = malloc(sizeof(dlistint_t));
	if (old == NULL)
		return (NULL);

	old->n = n;
	old->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	old->next = h;

	if (h != NULL)
		h->prev = old;

	*head = old;

	return (old);
}
