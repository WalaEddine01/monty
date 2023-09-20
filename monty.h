#ifndef MONTY_H
#define MONTY_H

#define _GNU_SOURCE

#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>



/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct lines_s - lines
 * @line: line
 * @next: pointer to the next node
 *
 * Description: lines
 */
typedef struct line_s
{
	char *line;
	struct line_s *next;
} line_t;

line_t *head;
/** PROTOTYPES */
void check_nbr_args(int argc);
void check_open_file(char **argv);
stack_t *push(stack_t **head, const int n);
int pop(stack_t **head);
void free_stack(stack_t **head);
size_t pall(const line_t *h);
void free_stack2(line_t **head);

#endif /* MONTY_H */
