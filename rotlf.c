#include "monty.h"
/**
  *f_rotlfn- function rotates the stack to the top
  *@head: (double pointer) stack head
  *@counter: (variable) line_number
  *Return: return nothin
 */
void f_rotlfn(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *tmpvrble = *head, *auxvrble;

	if (*head == NULL || (*head)->nextv == NULL)
	{
		return;
	}
	auxvrble = (*head)->nextv;
	auxvrble->prevv = NULL;
	while (tmpvrble->nextv != NULL)
	{
		tmpvrble = tmpvrble->nextv;
	}
	tmpvrble->nextv = *head;
	(*head)->nextv = NULL;
	(*head)->prevv = tmpvrble;
	(*head) = auxvrble;
}
