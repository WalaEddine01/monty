#include "monty.h"
/**
 * swap - swapss the two value at the top of the stack
 * @stack: pointer to the top of the stack
 * @line_number: the number of the line
 * Return: Void
 */
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;
	int a, b, i = 0;

	(void)line_number;
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	if (stack == NULL || !*stack || i < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		free_stack(stack);
		free_stack2(&head);
		exit(EXIT_FAILURE);
	}
	a = (*stack)->n;
	b = (*stack)->next->n;
	(*stack)->n = b;
	(*stack)->next->n = a;
}
