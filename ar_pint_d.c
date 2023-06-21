#include "monty.h"

/**
 * ar_f_pint_d - function taht prints the top
 *
 * @_headd: is the stack head
 * @_counterd: is the line_number
 *
 * Return: is the no return
*/
void ar_f_pint_d(stack_t **_headd, unsigned int _counterd)
{
	if (*_headd == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", _counterd);
		fclose(ar_bus.file);
		free(ar_bus._contentd);
		ar_free_stack_d(*_headd);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*_headd)->n);
}
