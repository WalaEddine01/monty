#include "monty.h"
/**
 * free_stack - frees the stuck
 * @head: pointer to the stuck
 * Return: Void
 */
void free_stack(stack_t **head)
{
	stack_t *ptr;

	if (head == NULL)
		return;
	if (head == NULL)
		free(*head);
	else
	{
		ptr = *head;
		while (*head && (*head)->next)
		{
			ptr = *head;
			*head = (*head)->next;
			free(ptr);
		}
		free(*head);
	}
}
