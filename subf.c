#include "monty.h"
/**
  *f_subfn - function sustration
  *@head: (double pointer) stack head
  *@counter: (variable) line_number
  *Return: returns nothin
 */
void f_subfn(stack_t **head, unsigned int counter)
{
	stack_t *auxvrble;
	int susvrble, nodesvrble;

	auxvrble = *head;
	for (nodesvrble = 0; auxvrble != NULL; nodesvrble++)
		auxvrble = auxvrble->nextv;
	if (nodesvrble < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stackfn(*head);
		exit(EXIT_FAILURE);
	}
	auxvrble = *head;
	susvrble = auxvrble->nextv->n - auxvrble->n;
	auxvrble->nextv->n = susvrble;
	*head = auxvrble->nextv;
	free(auxvrble);
}
