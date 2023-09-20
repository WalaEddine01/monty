#include "monty.h"

/**
 * main - main function of the monty interpriter
 * @argc: number of arguments
 * @argv: the array of arguments
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char **argv)
{
	check_nbr_args(argc);
	check_open_file(argv);
	pall(head);
	free_stack2(&head);
	return (0);
}
