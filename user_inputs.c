#include "shell.h"

/**
 * user_inputs - a function that collects user inputs from the stdin and tokenizes them
 *
 * Return: a string containing user inputs.
 */
char *user_inputs(void)
{
	char *input = NULL;
	size_t n = 0;

	/* fetch user input */
	if (getline(&input, &n, stdin) == -1)
	{
		perror("Error fetching user input");
		/* exit(); */
	}

	return (input);
}
