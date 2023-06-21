#include "monty.h"

/**
 * ar_f_queue_d - function that prints the top
 *
 * @_headd: is the stack head
 * @_counterd: is the line_number
 *
 * Return: is the no return
*/
void ar_f_queue_d(stack_t **_headd, unsigned int _counterd)
{
	(void)_headd;
	(void)_counterd;
	ar_bus.lifi = 1;
}

/**
 * ar_addqueue_d - function that add node to the tail stack
 *
 * @n: new_value
 * @_headd: is the head of the stack
 *
 * Return: no return
*/
void ar_addqueue_d(stack_t **_headd, int n)
{
	stack_t *new_node, *a_ux;

	a_ux = *_headd;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (a_ux)
	{
		while (a_ux->next)
			a_ux = a_ux->next;
	}
	if (!a_ux)
	{
		*_headd = new_node;
		new_node->prev = NULL;
	}
	else
	{
		a_ux->next = new_node;
		new_node->prev = a_ux;
	}
}
