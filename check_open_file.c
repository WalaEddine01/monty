#include "monty.h"
/**
 * check_open_file - open the file
 * @argv: the string argument
 * Return: void
 */
void check_open_file(char **argv)
{
	FILE *fd;
	char *buffer;
	size_t n = 0;
	line_t *ptr = NULL, *tmp;

	fd = fopen(argv[1], "r");
	if (fd == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		fclose(fd);
		free(buffer);
		exit(EXIT_FAILURE);
	}
	while (getline(&buffer, &n, fd) != -1)
	{
		ptr = malloc(sizeof(line_t));
		ptr->line = malloc(strlen(buffer) + 1);
		strcpy(ptr->line, buffer);
		ptr->next = NULL;
		if (!head)
			head = ptr;
		else
		{
			tmp = head;
			while (tmp->next)
				tmp = tmp->next;
			tmp->next = ptr;
		}
	}
	fclose(fd);
	free(buffer);
}
