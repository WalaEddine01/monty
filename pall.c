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

	(void)line_number;
	if (!tmp || !head)
		return;
	while (tmp != NULL)
	{
		fprintf(stdout, "%d\n", tmp->n);
		tmp = tmp->next;
	}
}
