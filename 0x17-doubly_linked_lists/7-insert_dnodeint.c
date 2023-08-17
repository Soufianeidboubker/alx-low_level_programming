#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a old node at
 * a given position
 *
 * @h: head of the list
 * @idx: index of the old node
 * @n: value of the old node
 * Return: the address of the old node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *old;
	dlistint_t *head;
	unsigned int i;

	old = NULL;
	if (idx == 0)
		old = add_dnodeint(h, n);
	else
	{
		head = *h;
		i = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (i == idx)
			{
				if (head->next == NULL)
					old = add_dnodeint_end(h, n);
				else
				{
					old = malloc(sizeof(dlistint_t));
					if (old != NULL)
					{
						old->n = n;
						old->next = head->next;
						old->prev = head;
						head->next->prev = old;
						head->next = old;
					}
				}
				break;
			}
			head = head->next;
			i++;
		}
	}

	return (old);
}
