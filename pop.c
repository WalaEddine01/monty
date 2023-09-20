#include "monty.h"
/**
 * pop - delete the the node from the beg of the stuck
 * @head: the pointer to the list
 * Return: 1 if it works -1 otherwise
 */
int pop(stack_t **head)
{
	stack_t *tmp = *head;

	if (head == NULL || !*head)
		return (-1);
	(*head) = tmp->next;
	if (*head != NULL)
		(*head)->prev = NULL;
	free(tmp);
	tmp = NULL;
	return (1);
}
