#include "lists.h"
/**
 * add_nodeint - adds node to the beginning of the code
 * @n: the addition in qestion
 * @head: pointer to the head pointer
 * Return: address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
		return (0);
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (0);
	if (*head == NULL)
		new_node->next = NULL;
	else
		new_node->next = *head;
	new_node->n = n;
	*head = new_node;

	return (*head);
}
