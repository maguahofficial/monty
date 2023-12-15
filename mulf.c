#include "monty.h"
/**
 * f_mulfn - function multiplies the top two elements of the stack.
 * @head: (double pointer) stack head
 * @counter:(variable) line_number
 * Return: returns nothin
*/
void f_mulfn(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stackfn(*head);
		exit(EXIT_FAILURE);
	}
	hvrble = *head;
	auxvrble = hvrble->nextv->n * hvrble->n;
	hvrble->nextv->n = auxvrble;
	*head = hvrble->nextv;
	free(hvrble);
}
