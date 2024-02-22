#include "shell.h"

/**
 * main - Entry point.
 *
 * Return: 0 on success, -1 on failure.
 */
int main(void)
{
	char *usr_inp = NULL;
	char **token;

	while (1)
	{
		/* printing the prompt */
		prompt();

		/* fetch user input */
		usr_inp = user_inputs();

		token = malloc(sizeof(char *) * 20);
		if (token == NULL)
			perror("failed to allocate memory");

		/* Tokenization of user inputs */
		token = tokenize(usr_inp, " \n");

		/* forking a process and executing a program */
		exec(token);
	}
	return (0);
}
