#include "monty.h"
/**
 * _pop - function to remove the top element from the stack
 * @stack: pointer to pointer to the first element on the stack
 * @line_number: number of the current line
 * Return: 0 if the element is successfully removed
*/
int _pop(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	stack_t *temp = *stack;
	*stack = (*stack)->next;

	if (*stack != NULL)
		(*stack)->prev = NULL;

	free(temp);
	return (0);
}
