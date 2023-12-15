#include "monty.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
* main - function monty code interpreter
* @argc: (pointer)number of arguments
* @argv: (int variable) monty file location
* Return: will return 0 on success
*/
bus_t bus = {NULL, NULL, NULL, 0};
int main(int argc, char *argv[])
{
	char *contentvrble;
	FILE *filevrble;
	size_t sizevrble = 0;
	ssize_t read_linevrble = 1;
	stack_t *stackvrble = NULL;
	unsigned int countervrble = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	filevrble = fopen(argv[1], "r");
	bus.file = filevrble;
	if (!filevrble)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (read_linevrble > 0)
	{
		contentvrble = NULL;
		read_linevrble = getline(&contentvrble, &sizevrble, filevrble);
		bus.content = contentvrble;
		countervrble++;
		if (read_linevrble > 0)
		{
			executefn(contentvrble, &stackvrble, countervrble, filevrble);
		}
		free(contentvrble);
	}
	free_stackfn(stackvrble);
	fclose(filevrble);
	return (0);
}
