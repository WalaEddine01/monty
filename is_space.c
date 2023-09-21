#include "monty.h"
/**
 * is_space - test if the input is space
 * @str: string input
 * Return: 1 if true 0 if not
 */
int is_space(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == ' ')
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
