#include "monty.h"
/**
 * push - adds a node at the beggining of the stack
 * @line_number: number of line
 * @stack: the pointer to the list
 * Return: Nothing
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new_node = NULL;

	if (head->n_token <= 1 || !(is_nbr(head->tokens[1])))
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		free_stack2(&head);
		free_stack(stack);
		exit(EXIT_FAILURE);
	}
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		free_stack2(&head);
		free_stack(stack);
		free(new_node);
		malloc_f();
	}
	new_node->n = atoi(head->tokens[1]);
	new_node->next = *stack;
	new_node->prev = NULL;

	if (*stack != NULL)
	{
		(*stack)->prev = new_node;
	}
	*stack = new_node;
}
