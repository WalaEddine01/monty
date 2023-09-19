#include "monty.h"
/**
 * check_nbr_args - check the number of arguments
 * @argc: number of args
 * Return: NOTHING
 */
void check_nbr_args(int argc)
{
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
}
