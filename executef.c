#include "monty.h"
/**
* executefn - function executes the opcode
* @stack: (double pointer) head linked list - stack
* @counter: (variable) line_counter
* @file: (pointer) poiner to monty file
* @content: (variable)line content
* Return: return nothin
*/
int executefn(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t opstvrble[] = {
				{"push", f_pushfn}, {"pall", f_pallfn}, {"pint", f_pintfn},
				{"pop", f_popfn},
				{"swap", f_swapfn},
				{"add", f_addfn},
				{"nop", f_nopfn},
				{"sub", f_subfn},
				{"div", f_divfn},
				{"mul", f_mulfn},
				{"mod", f_modfn},
				{"pchar", f_pcharfn},
				{"pstr", f_pstrfn},
				{"rotl", f_rotlfn},
				{"rotr", f_rotrfn},
				{"queue", f_queuefn},
				{"stack", f_stackfn},
				{NULL, NULL}
				};
	unsigned int ivrble = 0;
	char *opvrble;

	opvrble = strtok(content, " \n\t");
	if (opvrble && opvrble[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opstvrble[ivrble].opcode && opvrble)
	{
		if (strcmp(opvrble, opstvrble[ivrble].opcode) == 0)
		{	opstvrble[ivrble].f(stack, counter);
			return (0);
		}
		ivrble++;
	}
	if (opvrble && opstvrble[ivrble].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counter, opvrble);
		fclose(file);
		free(content);
		free_stackfn(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
