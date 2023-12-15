#include "monty.h"
/**
 * f_popfn - function prints the top
 * @head: (double pointer) stack head
 * @counter: (variable) line_number
 * Return: return nothin
*/
void f_popfn(stack_t **head, unsigned int counter)
{
	stack_t *hvrble;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stackfn(*head);
		exit(EXIT_FAILURE);
	}
	hvrble = *head;
	*head = hvrble->nextv;
	free(hvrble);
}
