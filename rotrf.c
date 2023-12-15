#include "monty.h"
/**
  *f_rotrfn - function rotates the stack to the bottom
  *@head: (double pointer) stack head
  *@counter: (variable) line_number
  *Return: return nothin
 */
void f_rotrfn(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *copyvrble;

	copyvrble = *head;
	if (*head == NULL || (*head)->nextv == NULL)
	{
		return;
	}
	while (copyvrble->nextv)
	{
		copyvrble = copyvrble->nextv;
	}
	copyvrble->nextv = *head;
	copyvrble->prevv->nextv = NULL;
	copyvrble->prevv = NULL;
	(*head)->prevv = copyvrble;
	(*head) = copyvrble;
}
