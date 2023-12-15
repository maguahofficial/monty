#include "monty.h"
/**
 * f_pallfn - function prints the stack
 * @head: (double pointer) stack head
 * @counter: (variable) no used
 * Return: returns nothin
*/
void f_pallfn(stack_t **head, unsigned int counter)
{
	stack_t *hvrble;
	(void)counter;

	hvrble = *head;
	if (hvrble == NULL)
		return;
	while (hvrble)
	{
		printf("%d\n", hvrble->n);
		hvrble = hvrble->nextv;
	}
}
