#include "monty.h"
/**
 * pop - delete the the node from the beg of the stuck
 * @stack: the pointer to the stack
 * @line_number: line nbr
 * Return: Nothing
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = NULL;

	if (stack == NULL || !*stack)
	{
		fprintf(stderr, "L%d: can't pop an empty stack", line_number);
		free_stack(stack);
		free_stack2(&head);
		exit(EXIT_FAILURE);
	}
	tmp = *stack;
	(*stack) = (*stack)->next;
	if (*stack != NULL)
		(*stack)->prev = NULL;
	free(tmp);
}
