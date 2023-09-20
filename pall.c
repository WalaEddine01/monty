#include "monty.h"
/**
 * pall - prints all the elements of a stuck
 * @h: the head of the stuck
 * Return: the number of nodes
 */
size_t pall(const stack_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
