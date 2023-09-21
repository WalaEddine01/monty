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
	
	int j = 0;
	line_t *ptr;

	(void) argc;
	ptr = head;
	check_open_file(argv);
	while (ptr || ptr->next)
	{
		printf("tokennnnnnnn = %s\n", ptr->tokens[j]);
		ptr = ptr->next;
		j++;
	}

	return (0);
}
