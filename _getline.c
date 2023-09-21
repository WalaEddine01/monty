#include "monty.h"
/**
 * process_line - process all lines
 * @buffer: memory to store lines
 * @i: nbr of line
 * Return: void
 *
 */
void process_line(char *buffer, unsigned int i)
{
	char *dilim = " \n", *linecpy, *token;
	line_t *ptr = NULL, *tmp;
	unsigned int j = 0;

	ptr = malloc(sizeof(line_t));
	if (ptr == NULL)
	{
		free(ptr);
		malloc_f();
	}
	ptr->n_token = 0;
	ptr->line = malloc(strlen(buffer) + 1);
	if (ptr->line == NULL)
	{
		free(ptr->line);
		malloc_f();
	}
	strcpy(ptr->line, buffer);
	linecpy = malloc(sizeof(char) * (strlen(ptr->line) + 1));
	if (linecpy == NULL)
	{
		free(linecpy);
		malloc_f();
	}
	strcpy(linecpy, ptr->line);
	token = strtok(linecpy, dilim);
	ptr->tokens = malloc(sizeof(char *) * 3);
	if (ptr->tokens == NULL)
	{
		free(ptr->tokens);
		malloc_f();
	}
	j = 0;
	while (token != NULL && j < 3)
	{
		ptr->tokens[j] = malloc(sizeof(char) * (strlen(token) + 1));
		if (ptr->tokens[j] == NULL)
		{
			free(ptr->tokens[j]);
			malloc_f();
		}
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
	free(token);
	free(linecpy);
}
