#include "monty.h"
/**
* free_stackfn - function frees a doubly linked list
* @head: (pointer)head of the stack
*/
void free_stackfn(stack_t *head)
{
	stack_t *auxvrble;

	auxvrble = head;
	while (head)
	{
		auxvrble = head->nextv;
		free(head);
		head = auxvrble;
	}
}
