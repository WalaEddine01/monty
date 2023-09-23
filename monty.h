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
 * struct line_s - lines
 * @line: line
 * @next: pointer to the next node
 * @line_nbr: line number
 * @tokens: all tokens
 * @n_token: number of tokens
 *
 * Description: struct custum to store all info
 */
typedef struct line_s
{
	char *line;
	struct line_s *next;
	unsigned int line_nbr;
	char **tokens;
	unsigned int n_token;
} line_t;

extern line_t *head;
/** PROTOTYPES */
void check_nbr_args(int argc);
void check_open_file(char **argv);
void push(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void free_stack(stack_t **head);
void pall(stack_t **stack, unsigned int line_number);
void free_stack2(line_t **head);
void malloc_f(void);
int is_space(const char *str);
int is_nbr(const char *str);
instruction_t *get_inst(void);
void invalid_instruction(void);
void open_f(char **argv);
void process_line(char *buffer, unsigned int i);
void initialize_line(line_t *ptr);
void tokenize_line(line_t *ptr, char *linecpy, char *dilim);
void create_and_append_node(line_t *ptr, unsigned int i);
void check_open_file2(char **argv);
void free_stack3(instruction_t *head);
void process_line2(char *buffer, unsigned int i);
void pint(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);

#endif /* MONTY_H */
