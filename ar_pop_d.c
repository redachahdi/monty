#include "monty.h"

/**
 * ar_f_pop_d - function that prints the top
 *
 * @_headd: is the stack head
 * @_counterd: is the line_number
 *
 * Return: is the no return
*/
void ar_f_pop_d(stack_t **_headd, unsigned int _counterd)
{
	stack_t *_h;

	if (*_headd == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", _counterd);
		fclose(ar_bus.file);
		free(ar_bus._contentd);
		ar_free_stack_d(*_headd);
		exit(EXIT_FAILURE);
	}
	_h = *_headd;
	*_headd = _h->next;
	free(_h);
}
