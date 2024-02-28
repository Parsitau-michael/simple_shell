#include "shell.h"

/**
 * main - Entry point.
 * Return: 0 on success, -1 on failure.
 */
int main(void)
{
	char *input = NULL;
	char **token;

	while (1)
	{
		/* printing the prompt */
		prompt();
		/* fetching user inputs */
		input = user_inputs();
		/* check for exit */
		if (strcmp(input, "exit\n") == 0)
		{
			free(input);
			break;
		}
		/* Tokenization of user inputs */
		token = tokenize(input, " \n");
		/* Tokenization of the path var */
		/* forking a process and executing a program */
		if (token[0] != NULL)
		{
			if (strcmp(token[0], "env") == 0)
			{
				print_env();
			}
			else
			{
				execute(token);
			}
		}
		free_array(token);
		free(input);
	}
	return (0);
}
