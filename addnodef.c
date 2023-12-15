#include "monty.h"
/**
 * addnodefn - function add node to the head stack
 * @head: (double pointer) head of the stack
 * @n: (int variable) new_value
 * Return: no return
*/
void addnodefn(stack_t **head, int n)
{

	stack_t *new_nodevarble, *auxvarble;

	auxvarble = *head;
	new_nodevarble = malloc(sizeof(stack_t));
	if (new_nodevarble == NULL)
	{ printf("Error\n");
		exit(0); }
	if (auxvarble)
		auxvarble->prevv = new_nodevarble;
	new_nodevarble->n = n;
	new_nodevarble->nextv = *head;
	new_nodevarble->prevv = NULL;
	*head = new_nodevarble;
}
