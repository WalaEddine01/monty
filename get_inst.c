#include "monty.h"
/**
 * get_inst - get the right instruction
 * Return: pointer to instruction_t
 */
instruction_t *get_inst(void)
{
	int i = 0;
	instruction_t instructions[] = {
		{"push", &push}, {"pop", &pop},
		{"pall", &pall}, {NULL, NULL}
	};
	instruction_t *inst;

	if (head->n_token == 0)
	{
		free_stack2(&head);
		return (NULL);
	}
	for (i = 0; instructions[i].opcode != NULL; i++)
	{
		if (strcmp(instructions[i].opcode, head->tokens[0]) == 0)
		{
			inst = malloc(sizeof(instruction_t));
			if (inst == NULL)
			{
				free_stack3(inst);
				malloc_f();
			}
			inst->opcode = instructions[i].opcode;
			inst->f = instructions[i].f;
			return (inst);
		}
		else
		{
			free_stack2(&head);
			return (NULL);
		}
	}
	return (NULL);
}
