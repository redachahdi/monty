#include "monty.h"
/**
 * ar_f_stack_d - function that prints the top
 *
 * @_headd: is the stack head
 * @_counterd: is the line_number
 *
 * Return: is the no return
*/
void ar_f_stack_d(stack_t **_headd, unsigned int _counterd)
{
	(void)_headd;
	(void)_counterd;
	ar_bus.lifi = 0;
}
/*
 * ar_f_sub_d- function that sustration
 *
 * @_headd: is the stack head
 * @_counterd: is the line_number
 *
 * Return: is the no return
 */
void ar_f_sub_d(stack_t **_headd, unsigned int _counterd)
{
	stack_t *a_ux;
	int sus;
	int nodes;

	a_ux = *_headd;
	for (nodes = 0; a_ux != NULL; nodes++)
		a_ux = a_ux->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", _counterd);
		fclose(ar_bus.file);
		free(ar_bus._contentd);
		ar_free_stack_d(*_headd);
		exit(EXIT_FAILURE);
	}
	a_ux = *_headd;
	sus = a_ux->next->n - a_ux->n;
	a_ux->next->n = sus;
	*_headd = a_ux->next;
	free(a_ux);
}
