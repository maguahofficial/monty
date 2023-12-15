#include "monty.h"
/**
 * f_pstrfn - function prints the string starting at the top of the stack,
 * followed by new line
 * @head: (double pointer) stack head
 * @counter: (variable) line_number
 * Return: return nothin
*/
void f_pstrfn(stack_t **head, unsigned int counter)
{
	stack_t *hvrble;
	(void)counter;

	hvrble = *head;
	while (hvrble)
	{
		if (hvrble->n > 127 || hvrble->n <= 0)
		{
			break;
		}
		printf("%c", hvrble->n);
		hvrble = hvrble->nextv;
	}
	printf("\n");
}
