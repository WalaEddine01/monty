#include "monty.h"
/**
 * push - adds a node at the beggining of the stack
 * @n: the DATA of the new node
 * @head: the pointer to the list
 * Return: the new list
 */
stack_t *push(stack_t **head, const int n)
{
	stack_t *tmp = NULL;

	tmp = malloc(sizeof(stack_t));
	if (tmp == NULL || head == NULL)
	{
		free(tmp);
		return (NULL);
	}
	tmp->n = n;
	tmp->next = NULL;
	tmp->prev = NULL;
	if (*head == NULL)
	{
		*head = tmp;
	}
	else
	{
		tmp->next = *head;
		(*head)->prev = tmp;
		*head = tmp;
	}
	return (*head);
}
