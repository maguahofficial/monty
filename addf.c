#include "monty.h"
/**
 * f_addfn - function adds the top two elements of the stack.
 * addf.c file
 * @head: (double pointer) stack head
 * @counter: (int variable) line_number
 * Return: no return
*/
void f_addfn(stack_t **head, unsigned int counter)
{
	stack_t *hxx;
	int lenvrble = 0, auxvrble;

	hxx = *head;
	while (hxx)
	{
		hxx = hxx->nextv;
		lenvrble++;
	}
	if (lenvrble < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stackfn(*head);
		exit(EXIT_FAILURE);
	}
	hxx = *head;
	auxvrble = hxx->n + hxx->nextv->n;
	hxx->nextv->n = auxvrble;
	*head = hxx->nextv;
	free(hxx);
}
