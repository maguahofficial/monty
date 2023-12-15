#include "monty.h"
/**
 * f_pcharfn - function prints the char at the top of the stack,
 * followed by new line
 * @head: (double pointer) stack head
 * @counter: (variable) line_number
 * Return: returns nothin
*/
void f_pcharfn(stack_t **head, unsigned int counter)
{
	stack_t *hvrble;

	hvrble = *head;
	if (!hvrble)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stackfn(*head);
		exit(EXIT_FAILURE);
	}
	if (hvrble->n > 127 || hvrble->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stackfn(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", hvrble->n);
}
