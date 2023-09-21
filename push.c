#include "monty.h"
/**
 * push - adds a node at the beggining of the stack
 * @line_number: number of line
 * @stack: the pointer to the list
 * Return: Nothing
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = NULL;

	if (head->n_token <= 1 || !(is_nbr(head->tokens[1])))
	{
		free_stack2(&head);
		free_stack(stack);
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	tmp = *stack;
	*stack = malloc(sizeof(stack_t));
	if (*stack == NULL)
	{
		free_stack2(&head);
		free_stack(stack);
		malloc_f();
	}
	(*stack)->n = (int)atoi(head->tokens[1]);
	(*stack)->next = NULL;
	(*stack)->prev = NULL;
	if (tmp != NULL)
	{
		(*stack)->next = tmp;
		tmp->prev = *stack;
	}
}
