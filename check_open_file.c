#include "monty.h"
/**
 * check_open_file - open the file
 * @argv: the string argument
 * Return: the file descripter
 */
char *check_open_file(char **argv)
{
	int fd, fd2;
	char *buffer = malloc(sizeof(char) * 1024);

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		close(fd);
		exit(EXIT_FAILURE);
	}
	fd2 = read(fd, buffer, sizeof(buffer));
	if (fd2 == -1)
	{
		fprintf(stderr, "Error: Can't read file %s\n", argv[1]);
		close(fd2);
		exit(EXIT_FAILURE);
	}
	if (buffer[strlen(buffer) - 1] == '\n')
		buffer[strlen(buffer) - 1] = '\0';
	return (buffer);
}
