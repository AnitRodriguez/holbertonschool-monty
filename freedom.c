#include "monty.h"
/**
 * freedom - free stack
 * @stack: stack
 * @buffer: buffer
 * Return: Nothing
*/
void freedom(stack_t *stack, char *buffer)
{
	while (stack)
	{
		stack_t *next_node = stack->next;

		free(stack);
		stack = next_node;
	}
	free(buffer);
}
