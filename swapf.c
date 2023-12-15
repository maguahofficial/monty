#include "monty.h"
/**
 * f_swapfn - function adds the top two elements of the stack.
 * @head: (double pointer) stack head
 * @counter: (variable) line_number
 * Return: return nothin
*/
void f_swapfn(stack_t **head, unsigned int counter)
{
	stack_t *hvrble;
	int lenvrble = 0, auxvrble;

	hvrble = *head;
	while (hvrble)
	{
		hvrble = hvrble->nextv;
		lenvrble++;
	}
	if (lenvrble < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stackfn(*head);
		exit(EXIT_FAILURE);
	}
	hvrble = *head;
	auxvrble = hvrble->n;
	hvrble->n = hvrble->nextv->n;
	hvrble->nextv->n = auxvrble;
}
