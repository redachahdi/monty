#include "monty.h"

/**
* ar_free_stack_d - function that frees a doubly link
*
* @_headd: is the head of the stack
*/
void ar_free_stack_d(stack_t *_headd)
{
	stack_t *a_ux;

	a_ux = _headd;
	while (_headd)
	{
		a_ux = _headd->next;
		free(_headd);
		_headd = a_ux;
	}
}
