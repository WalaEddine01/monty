#include "monty.h"
/**
 * pall - prints all the elements of a stuck
 * @h: the head of the stuck
 * Return: the number of nodes
 */
size_t pall(const line_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%s", h->line);
		h = h->next;
		i++;
	}
	return (i);
}
