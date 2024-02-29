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

	/* removing the new line character */
	if (read > 0 && input[read - 1] == '\n')
		input[read - 1] = '\0';

	/* handling empty lines */
	if (read == 1)
	{
		free(input);
		return (NULL);
	}

	return (input);
}
