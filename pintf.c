#include "monty.h"
/**
 * f_pintfn - function that prints the top
 * @head: (double pointer) stack head
 * @counter: (variable) line_number
 * Return: return nothin
*/
void f_pintfn(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stackfn(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
