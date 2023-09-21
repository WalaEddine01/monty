#include "monty.h"
/**
 * open_f - falling of open function
 * @argv: the name of file input
 * Return: void
 */
void open_f(char **argv)
{
	fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
	exit(EXIT_FAILURE);
}
