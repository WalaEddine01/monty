#include "monty.h"
/**
 * pall - prints all the elements of a stuck
 * @line_number: nbr of line
 * @stack: pointer to the stack
 * Return: Nothing
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;

	(void) stack;
	(void) line_number;
	if (*stack == NULL)
		return;
	while (tmp)
	{
		printf("%d", tmp->n);
		tmp = tmp->next;
	}
}
