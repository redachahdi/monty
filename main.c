#include <stdio.h>
#include <stdlib.h>

#include "monty.h"

ar_bus_t ar_bus = {NULL, NULL, NULL, 0};

/**
 * main - Monty code interpreter
 * @argc: number of arguments
 * @argv: Monty file location
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	char _contentd[1024];  /* Assuming a maximum line length of 1023 characters */
	FILE *file;
	stack_t *stack = NULL;
	unsigned int _counterd = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file = fopen(argv[1], "r");
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while (fgets(_contentd, sizeof(_contentd), file) != NULL)
	{
		_counterd++;
		ar_bus._contentd = _contentd;

		/* Remove the newline character from the end of the line */
		_contentd[strcspn(_contentd, "\n")] = '\0';

		ar_execute_d(_contentd, &stack, _counterd, file);
	}

	ar_free_stack_d(stack);
	fclose(file);

	return 0;
}

