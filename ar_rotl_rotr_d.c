#include "monty.h"
/*
 * ar_f_rotl_d - is the function that rotates the stack to the top
 * @_headd: double pointer to the head of the stack
 * @_counterd: line number (unused)
 *
 * Return: no return 
 */
void ar_f_rotl_d(stack_t **_headd,  __attribute__((unused)) unsigned int _counterd)
{
	stack_t *tmp = *_headd, *a_ux;

	if (*_headd == NULL || (*_headd)->next == NULL)
	{
		return;
	}
	a_ux = (*_headd)->next;
	a_ux->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *_headd;
	(*_headd)->next = NULL;
	(*_headd)->prev = tmp;
	(*_headd) = a_ux;
}
/*
 * ar_f_rotr_d - is the function that rotates the stack to the bottom
 *
 * @_headd: is the stack head
 * @_counterd: is the line number
 *
 * Return: is the no return
 */
void ar_f_rotr_d(stack_t **_headd, __attribute__((unused)) unsigned int _counterd)
{
	stack_t *copy;

	copy = *_headd;
	if (*_headd == NULL || (*_headd)->next == NULL)
	{
		return;
	}
	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = *_headd;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*_headd)->prev = copy;
	(*_headd) = copy;
}
