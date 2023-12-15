#include "monty.h"
/**
 * f_pushfn - function add node to the stack
 * @head: (double pointer) stack head
 * @counter: (variable) line_number
 * Return: return nothin
*/
void f_pushfn(stack_t **head, unsigned int counter)
{
	int nvrble, jvrble = 0, flagvrble = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			jvrble++;
		for (; bus.arg[jvrble] != '\0'; jvrble++)
		{
			if (bus.arg[jvrble] > 57 || bus.arg[jvrble] < 48)
				flagvrble = 1; }
		if (flagvrble == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_stackfn(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stackfn(*head);
		exit(EXIT_FAILURE); }
	nvrble = atoi(bus.arg);
	if (bus.lifi == 0)
		addnodefn(head, nvrble);
	else
		addqueuefn(head, nvrble);
}
