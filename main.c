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
	
	line_t *ptr;

	(void) argc;
	check_open_file(argv);
	ptr = head;

	return (0);
}
