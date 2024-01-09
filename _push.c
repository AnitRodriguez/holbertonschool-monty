# include "monty.h"
/**
 * _push - implement the push opcode
 * @stack: pointer to a stack node pointer
 * @line_number: variable representing the current line number
*/

void _push(stack_t **stack, unsigned int line_number)
{
	char *argument = strtok(NULL, " \t\n");
	int value = atoi(argument);
	stack_t *new_node = NULL;

	if (!argument)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	new_node = malloc(sizeof(stack_t));
	if (!new_node)
	{
		fprintf(stderr, "Error malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = value;
	new_node->prev = NULL;
	new_node->next = *stack;

	if (*stack)
		(*stack)->prev = new_node;

	*stack = new_node;
}
