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
	int j = 0;

	(void) argc;
	check_open_file(argv);
	ptr = head;
	while (ptr)
	{
		j = 0;
		printf("line = %s", ptr->line);
		printf("line_nbr = %d\n", ptr->line_nbr);
		while (j < 2)
		{
			printf("tokennnnnnnn = %s\n", ptr->tokens[j]);
			j++;
		}
		printf("token = %d\n", ptr->n_token);
		ptr = ptr->next;
		printf("----\n");
	}

	return (0);
}
