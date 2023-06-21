#include "monty.h"

/**
* ar_execute_d - function that executes the opcode
*
* @stack: is the head linked list
* @_counterd: is the line_counter
* @file: poiner to monty file
* @_contentd: is the line content
*
* Return: is the no return
*/
int ar_execute_d(char *_contentd, stack_t **stack, unsigned int _counterd, FILE *file)
{
	instruction_t opst[] = {
				{"push", ar_f_push_d}, {"pall", ar_f_pall_d}, {"pint", ar_f_pint_d},
				{"pop", ar_f_pop_d},
				{"swap", ar_f_swap_d},
				{"add", ar_f_add_d},
				{"nop", ar_f_nop_d},
				{"sub", ar_f_sub_d},
				{"div", ar_f_div_d},
				{"mul", ar_f_mul_d},
				{"mod", ar_f_mod_d},
				{"pchar", ar_f_pchar_d},
				{"pstr", ar_f_pstr_d},
				{"rotl", ar_f_rotl_d},
				{"rotr", ar_f_rotr_d},
				{"queue", ar_f_queue_d},
				{"stack", ar_f_stack_d},
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *op;

	op = strtok(_contentd, " \n\t");
	if (op && op[0] == '#')
		return (0);
	ar_bus.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{	opst[i].f(stack, _counterd);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", _counterd, op);
		fclose(file);
		free(_contentd);
		ar_free_stack_d(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
