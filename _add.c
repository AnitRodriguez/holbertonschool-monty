#include "monty.h"
/**
 * _add - add the top two elements
 * @stack: pointer to pointer to the first element on the stack
 * @line_number: number of the current line
 * Return: 0 if add the top two elements
*/
int _add(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	int sum = (*stack)->n + (*stack)->next->n;
	(*stack)->next->n = sum;
	_pop(stack, line_number);
	return (0);
}
