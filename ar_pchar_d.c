#include "monty.h"

/**
 * ar_f_pchar_d - function prints the char at the  stack
 *
 * @_headd: is the stack head
 * @_counterd: is the line_number
 *
 * Return: is the no return
*/
void ar_f_pchar_d(stack_t **_headd, unsigned int _counterd)
{
	stack_t *_h;

	_h = *_headd;
	if (!_h)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", _counterd);
		fclose(ar_bus.file);
		free(ar_bus._contentd);
		ar_free_stack_d(*_headd);
		exit(EXIT_FAILURE);
	}
	if (_h->n > 127 || _h->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", _counterd);
		fclose(ar_bus.file);
		free(ar_bus._contentd);
		ar_free_stack_d(*_headd);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", _h->n);
}
