# include "monty.h"
/**
 * _pall - implement the pall opcode
 * @stack: pointer to a stack node pointer
 * @line_number: variable representing the current line number
*/

void _pall(stack_t **stack, unsigned int line_number)
{
	stack_t *element = *stack;

	(void)line_number;
	while (element)
	{
		printf("%d\n", element->n);
		element = element->next;
	}
}
