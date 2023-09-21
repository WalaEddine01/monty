#include "monty.h"
/**
 * invalid_instruction - invalid_instructio
 * Return: Void
 */
void invalid_instruction(void)
{
	fprintf(stderr, "L%d: unknown instruction %s\n",
			head->line_nbr, head->tokens[0]);
	free_stack2(&head);
	exit(EXIT_FAILURE);
}
