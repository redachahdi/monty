#include "monty.h"

/**
 * ar_f_push_d - function that add node to the stack
 *
 * @_headd: is the stack head
 * @_counterd: is the line_number
 *
 * Return: is the no return
*/
void ar_f_push_d(stack_t **_headd, unsigned int _counterd)
{
	int n;
	int j = 0, flag = 0;

	if (ar_bus.arg)
	{
		if (ar_bus.arg[0] == '-')
			j++;
		for (; ar_bus.arg[j] != '\0'; j++)
		{
			if (ar_bus.arg[j] > 57 || ar_bus.arg[j] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", _counterd);
			fclose(ar_bus.file);
			free(ar_bus._contentd);
			ar_free_stack_d(*_headd);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", _counterd);
		fclose(ar_bus.file);
		free(ar_bus._contentd);
		ar_free_stack_d(*_headd);
		exit(EXIT_FAILURE); }
	n = atoi(ar_bus.arg);
	if (ar_bus.lifi == 0)
		ar_addnode_d(_headd, n);
	else
		ar_addqueue_d(_headd, n);
}
