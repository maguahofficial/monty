#include "monty.h"
/**
 * f_divfn - function divides the top two elements of the stack.
 * @head: (double pointer) stack head
 * @counter: (un int variable) line_number
 * Return: no return
*/
void f_divfn(stack_t **head, unsigned int counter)
{
	stack_t *hvarble;
	int lenvarble = 0, auxvarble;

	hvarble = *head;
	while (hvarble)
	{
		hvarble = hvarble->nextv;
		lenvarble++;
	}
	if (lenvarble < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stackfn(*head);
		exit(EXIT_FAILURE);
	}
	hvarble = *head;
	if (hvarble->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stackfn(*head);
		exit(EXIT_FAILURE);
	}
	auxvarble = hvarble->nextv->n / hvarble->n;
	hvarble->nextv->n = auxvarble;
	*head = hvarble->nextv;
	free(hvarble);
}
