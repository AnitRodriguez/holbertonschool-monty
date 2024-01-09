# include "monty.h"
/**
 * main - a monty interpreter
 * @argc: number of arguments
 * @argv: the arguments
 * Return: 0 if everything OK
*/
int main(int argc, char **argv)
{
	char *line = NULL;
	char *opcode = NULL;
	FILE *file = NULL;
	size_t buf_size = 0;
	unsigned int l_num = 0;
	stack_t *stack = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (getline(&line, &buf_size, file) != -1)
	{
		opcode = strtok(line, " \t\n");
		if (!opcode)
			continue;
		if (opcode)
		{
			if (strcmp(opcode, "push") == 0)
				_push(&stack, l_num);
			else if (strcmp(opcode, "pall") == 0)
				_pall(&stack, l_num);
			else
			{
				fprintf(stderr, "L%u: unknown instruction %s\n", l_num, opcode);
				fclose(file);
				exit(EXIT_FAILURE);
			}
		}
		l_num++;
	}
	fclose(file);
	return (0);
}
