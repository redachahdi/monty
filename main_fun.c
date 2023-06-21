#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

ar_bus_t ar_bus = {NULL, NULL, NULL, 0};

/**
 * execute - function to execute Monty code
 *
 * @content: Monty code content to execute
 */
void execute(const char *content)
{
	printf("Executing Monty code: %s\n", content);
}

/**
 * main - is the main function that interprets Monty code
 *
 * @argc: is the number of arguments
 * @argv: is the Monty file location
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
    char _contentd[1024];
    FILE *file;
    unsigned int _counterd = 0;
    size_t len;

    if (argc != 2)
    {
        fprintf(stderr, "USAGE: monty file\n");
        exit(EXIT_FAILURE);
    }

    file = fopen(argv[1], "r");
    ar_bus.file = file;

    if (!file)
    {
        fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    while (fgets(_contentd, sizeof(_contentd), file) != NULL)
    {
        _counterd++;
        len = strlen(_contentd);
        if (len > 0 && _contentd[len - 1] == '\n')
        {
            _contentd[len - 1] = '\0';
        }

        if (strlen(_contentd) > 0)
        {
            execute(_contentd);
        }
    }

    fclose(file);
    return 0;
}

