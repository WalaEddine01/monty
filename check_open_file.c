#include "monty.h"
/**
 * check_open_file - open the file
 * @argv: the string argument
 * Return: void
 */
void check_open_file(char **argv)
{
	FILE *fd;
	char *buffer, *dilim = " \n", *linecpy, *token;
	size_t n = 0;
	line_t *ptr = NULL, *tmp;
	unsigned int i = 0, j = 0;
	
	fd = fopen(argv[1], "r");
	if (fd == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);		
		exit(EXIT_FAILURE);
	}
	while (getline(&buffer, &n, fd) != -1)
	{
		ptr = malloc(sizeof(line_t));
		if (ptr == NULL)
			malloc_f();
		ptr->n_token = 0;
		ptr->line = malloc(strlen(buffer) + 1);
		if (ptr->line == NULL)
			malloc_f();
		strcpy(ptr->line, buffer);
		linecpy = malloc(sizeof(char) * (strlen(ptr->line) + 1));
		strcpy(linecpy, ptr->line);
		token = strtok(linecpy, dilim);
		ptr->tokens = malloc(sizeof(char *) * 3);
		j = 0;
		while (token != NULL && j < 3)
		{
			ptr->tokens[j] = malloc(sizeof(char) * (strlen(token) + 1));
			if (ptr->tokens[j] == NULL)
			malloc_f();
			strcpy(ptr->tokens[j], token);
			ptr->n_token++;
			token = strtok(NULL, dilim);
			j++;
		}
		ptr->line_nbr = i;
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
		i++;
	}
	fclose(fd);
	free(buffer);
}
