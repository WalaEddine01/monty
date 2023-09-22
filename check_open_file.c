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
	printf("aaa\n");
	while (getline(&buffer, &n, fd) != -1)
	{
		printf("----\n");
		process_line(buffer, i);
		i++;
	}
	printf("-----\n");
	if (getline(&buffer, &n, fd) == -1 && i == 0)
		printf("s\n");
	fclose(fd);
	free(buffer);
	printf("----------------\n");
}
