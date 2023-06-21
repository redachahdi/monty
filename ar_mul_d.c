#include "monty.h"

/**
 * ar_f_mul_d - function that multiplies the two element
 *
 * @_headd: is the stack head
 * @_counterd: is the line_number
 *
 * Return: is the no return
*/
void ar_f_mul_d(stack_t **_headd, unsigned int _counterd)
{
	stack_t *_h;
	int l_en = 0;
	int a_ux;

	_h = *_headd;
	while (_h)
	{
		_h = _h->next;
		l_en++;
	}
	if (l_en < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", _counterd);
		fclose(ar_bus.file);
		free(ar_bus._contentd);
		ar_free_stack_d(*_headd);
		exit(EXIT_FAILURE);
	}
	_h = *_headd;
	a_ux = _h->next->n * _h->n;
	_h->next->n = a_ux;
	*_headd = _h->next;
	free(_h);
}
