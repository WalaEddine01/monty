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
	unsigned int i = 0;

	fd = fopen(argv[1], "r");
	if (fd == NULL)
		open_f(argv);
	while (getline(&buffer, &n, fd) != -1)
	{
		process_line(buffer, i);
		i++;
	}
	fclose(fd);
	free(buffer);
}
