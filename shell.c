#include "shell.h"

/**
 * main - Entry point.
 *
 * Return: 0 on success, -1 on failure.
 */
int main(void)
{
	char *input = NULL;
	size_t n = 0;
	char **token;

	/* printing the prompt */
	prompt();

	while (getline(&input, &n, stdin) != EOF)
	{
		/* Tokenization of user inputs */
		token = tokenize(input, " \n");

		/* Tokenization of the path var */


		/* forking a process and executing a program */
		execute(token);

		/* printing the prompt */
		prompt();

	}

	free(input);
	return (0);
}
