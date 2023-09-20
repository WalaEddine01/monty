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
/**
 * free_stack2 - frees the list
 * @head: pointer to the list
 * Return: Void
 */
void free_stack2(line_t **head)
{
	line_t *ptr;

	if (*head == NULL)
		return;
	else
	{
		ptr = *head;
		while (*head && (*head)->next)
		{
			ptr = *head;
			*head = (*head)->next;
			free(ptr->line);
			free(ptr);
		}
		free(*head);
	}
}
