#include "lists.h"
/**
 * add_dnodeint_end - adds a old node at the end
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the old element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *old;

	old = malloc(sizeof(dlistint_t));
	if (old == NULL)
		return (NULL);

	old->n = n;
	old->next = NULL;

	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = old;
	}
	else
	{
		*head = old;
	}

	old->prev = h;

	return (old);
}
