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

	pass_betty();

	while (1)
	{
		/* printing the prompt */
		prompt();

		/* fetch user input */
		usr_inp = user_inputs();

		token = malloc(sizeof(char *) * 20);

		/* Tokenization of user inputs */
		token = tokenizer(usr_inp);

		/* forking a process and executing a program */
		exec(token);
	}
	return (0);
}
