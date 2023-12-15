#include "monty.h"
/**
 * f_modfn - function computes the rest of the division of the second
 * top element of stack by the top element of the stack
 * @head: (double pointer) stack head
 * @counter: (uns int variable) line_number
 * Return: return nothin
*/
void f_modfn(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stackfn(*head);
		exit(EXIT_FAILURE);
	}
	hvrble = *head;
	if (hvrble->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stackfn(*head);
		exit(EXIT_FAILURE);
	}
	auxvrble = hvrble->nextv->n % hvrble->n;
	hvrble->nextv->n = auxvrble;
	*head = hvrble->nextv;
	free(hvrble);
}
