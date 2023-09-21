#include "monty.h"
line_t *head = NULL;
/**
 * main - main function of the monty interpriter
 * @argc: number of arguments
 * @argv: the array of arguments
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char **argv)
{
	stack_t *stack = NULL;
	instruction_t *op;

	check_nbr_args(argc);
	check_open_file(argv);
	while (head)
	{
		op = get_inst();
		if (op != NULL)
		{
			op->f(&stack, head->line_nbr);
		}
		else
			invalid_instruction();
		head = head->next;
	}
	free_stack(&stack);
	free_stack2(&head);
	return (0);
}
