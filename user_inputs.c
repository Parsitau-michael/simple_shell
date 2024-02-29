#include "shell.h"

/**
 * user_inputs - a function that collects user inputs from the stdin.
 *
 * Return: a string containing user inputs.
 */
char *user_inputs(void)
{
	char *input = NULL;
	size_t n = 0;

	ssize_t read = getline(&input, &n, stdin);

	if (read == -1)
	{
		free(input);
		exit(EXIT_FAILURE);
	}

	return (input);
}
