#include "monty.h"

/**
 * ar_addnode_d - function that add node to the head stack
 *
 * @_headd: is the head of the stack
 * @n: i the new_value
 *
 * Return: no return
*/
void ar_addnode_d(stack_t **_headd, int n)
{

	stack_t *new_node, *a_ux;

	a_ux = *_headd;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (a_ux)
		a_ux->prev = new_node;
	new_node->n = n;
	new_node->next = *_headd;
	new_node->prev = NULL;
	*_headd = new_node;
}
