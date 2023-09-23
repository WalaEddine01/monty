#include "monty.h"
/**
 * pint - prints the value at the top of the stack
 * @stack: pointer to the top of the stack
 * @line_number: the number of the line
 * Return: Void
 */
void pint(stack_t **stack, unsigned int line_number)
{
	(void)line_number;
	if (stack == NULL || !*stack)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		free_stack(stack);
		free_stack2(&head);
		exit(EXIT_FAILURE);
	}
	fprintf(stdout, "%d\n", (*stack)->n);
}
