#include "monty.h"
/*
 * ar_f_nop_d- function that nothing
 *
 * @_headd: is the stack head
 * @_counterd: is the line_number
 *
 * Return: is the no return
 */
void ar_f_nop_d(stack_t **_headd, unsigned int _counterd)
{
	(void) _counterd;
	(void) _headd;
}
/**
 * ar_f_pall_d - function that prints the stack
 *
 * @_headd: is the stack head
 * @_counterd: is the elememt no used
 *
 * Return: is the no return
*/
void ar_f_pall_d(stack_t **_headd, unsigned int _counterd)
{
	stack_t *_h;
	(void)_counterd;

	_h = *_headd;
	if (_h == NULL)
		return;
	while (_h)
	{
		printf("%d\n", _h->n);
		_h = _h->next;
	}
}
