#include "shell.h"

/**
 * prompt - a function that prints the prompt.
 *
 */
void prompt(void)
{
	if (isatty(STDIN_FILENO))
	{
		/* print a prompt to the user */
		shell_print("$ ");
		/* fflush(stdout); */
	}
}
