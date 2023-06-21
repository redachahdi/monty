#include "monty.h"

/**
 * ar_f_pstr_d - function that prints the string starting
 *
 * @_headd: is the stack head
 * @_counterd: is the line_number
 *
 * Return: is the no return
*/
void ar_f_pstr_d(stack_t **_headd, unsigned int _counterd)
{
	stack_t *_h;
	(void)_counterd;

	_h = *_headd;
	while (_h)
	{
		if (_h->n > 127 || _h->n <= 0)
		{
			break;
		}
		printf("%c", _h->n);
		_h = _h->next;
	}
	printf("\n");
}
