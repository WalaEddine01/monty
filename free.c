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
	ptr = *head;
	while (*head && (*head)->next)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
	}
	free(*head);
}
/**
 * free_stack2 - frees the list
 * @head: pointer to the list
 * Return: Void
 */
void free_stack2(line_t **head)
{
	line_t *ptr;
	unsigned int i = 0;

	if (*head == NULL)
		return;
	ptr = *head;
	while (*head && (*head)->next)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr->line);
		for (i = 0; i < ptr->n_token; i++)
			free(ptr->tokens[i]);
		free(ptr->tokens);
		free(ptr);
	}
	free((*head)->line);
	free(*head);
}
/**
 * free_stack3 - frees the memory
 * @head: pointer to the node
 * Return: Nothing
 */
void free_stack3(instruction_t *head)
{
	if (head == NULL)
		return;
	free(head);
}
