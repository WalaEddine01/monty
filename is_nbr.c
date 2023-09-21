#include "monty.h"
/**
 * is_nbr - check if the input is number
 * @str: the string input
 * Return: 1 if true 0 if false
 */
int is_nbr(const char *str)
{
	if (str == NULL || *str == '\0')
	{
		return (0);
	}
	if (*str == '-')
	{
		str++;
	}
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
		{
			return (0);
		}
		str++;
	}
    return (1);
}
