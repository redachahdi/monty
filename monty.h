#ifndef _H_MONTY_H
#define _H_MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct ar_bus_s - is the variables 
 *
 * @arg: is the value
 * @file: is the pointer to monty
 * @content: is the line content
 * @lifi: is the flag change stack <-> queue
 *
 * Description: is the carries values 
 */
typedef struct ar_bus_s
{
	char *arg;
	FILE *file;
	char *_contentd;
	int lifi;
}  ar_bus_t;
extern ar_bus_t ar_bus;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;


char *ar_realloc_d(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t ar_getstdin_d(char **lineptr, int file);
char  *ar_clean_line_d(char *_contentd);
void ar_f_push_d(stack_t **_headd, unsigned int _numberd);
void ar_f_pall_d(stack_t **_headd, unsigned int _numberd);
void ar_f_pint_d(stack_t **_headd, unsigned int _numberd);
int ar_execute_d(char *_contentd, stack_t **_headd, unsigned int _counterd, FILE *file);
void ar_free_stack_d(stack_t *_headd);
void ar_f_pop_d(stack_t **_headd, unsigned int _counterd);
void ar_f_swap_d(stack_t **_headd, unsigned int _counterd);
void ar_f_add_d(stack_t **_headd, unsigned int _counterd);
void ar_f_nop_d(stack_t **_headd, unsigned int _counterd);
void ar_f_sub_d(stack_t **_headd, unsigned int _counterd);
void ar_f_div_d(stack_t **_headd, unsigned int _counterd);
void ar_f_mul_d(stack_t **_headd, unsigned int _counterd);
void ar_f_mod_d(stack_t **_headd, unsigned int _counterd);
void ar_f_pchar_d(stack_t **_headd, unsigned int _counterd);
void ar_f_pstr_d(stack_t **_headd, unsigned int _counterd);
void ar_f_rotl_d(stack_t **_headd, unsigned int _counterd);
void ar_f_rotr_d(stack_t **_headd, __attribute__((unused)) unsigned int _counterd);
void ar_addnode_d(stack_t **_headd, int n);
void ar_addqueue_d(stack_t **_headd, int n);
void ar_f_queue_d(stack_t **_headd, unsigned int _counterd);
void ar_f_stack_d(stack_t **_headd, unsigned int _counterd);
#endif
