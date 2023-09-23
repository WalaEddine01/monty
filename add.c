#include "monty.h"
/**
 * add - adds the two value at the top of the stack
 * @stack: pointer to the top of the stack
 * @line_number: the number of the line
 * Return: Void
 */
void add(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;
	int i = 0;

	(void)line_number;
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	if (stack == NULL || !*stack || i < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		free_stack(stack);
		free_stack2(&head);
		exit(EXIT_FAILURE);
	}
	(*stack)->n = (*stack)->n + (*stack)->next->n;
	pop(&(*stack)->next, line_number);
}
