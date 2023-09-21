#include "monty.h"
/**
 * pall - prints all the elements of a stuck
 * @line_number: nbr of line
 * @stack: pointer to the stack
 * Return: Nothing
 */
void pall(stack_t **stack, unsigned int line_number)
{
	(void) line_number;


		printf("%d", (*stack)->n);
}
