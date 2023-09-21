#include "monty.h"
/**
 * malloc_f - falling of malloc function
 * Return: void
 */
void malloc_f(void)
{
	fprintf(stderr, "Error: malloc failed");
	free_stack2(&head);
	exit(EXIT_FAILURE);
}
