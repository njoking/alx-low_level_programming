#include "lists.h"
/**
 * listint_len - function that returns number of elements of list
 * @h: points to the header
 * Return: number of elements into a list
 */

size_t listint_len(const listint_t *h)
{
	size_t count;

	if (h == NULL)
		return (0);
	for (count = 0 ; h != NULL ; count++)
	{
	h = h->next;
	}
	return (count);
}
