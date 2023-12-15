#include "monty.h"
/**
 * f_queuefn - function prints the top
 * @head: (double pointer) stack head
 * @counter: (variable) line_number
 * Return: return nothin
*/
void f_queuefn(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * addqueuefn - function add node to the tail stack
 * @n: (int variable) new_value
 * @head: (ouble pointer) head of the stack
 * Return: return nothin
*/
void addqueuefn(stack_t **head, int n)
{
	stack_t *new_nodevrble, *auxvrble;

	auxvrble = *head;
	new_nodevrble = malloc(sizeof(stack_t));
	if (new_nodevrble == NULL)
	{
		printf("Error\n");
	}
	new_nodevrble->n = n;
	new_nodevrble->nextv = NULL;
	if (auxvrble)
	{
		while (auxvrble->nextv)
			auxvrble = auxvrble->nextv;
	}
	if (!auxvrble)
	{
		*head = new_nodevrble;
		new_nodevrble->prevv = NULL;
	}
	else
	{
		auxvrble->nextv = new_nodevrble;
		new_nodevrble->prevv = auxvrble;
	}
}
