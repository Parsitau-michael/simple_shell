#include "shell.h"

/**
 * prompt - a function that prints the prompt.
 *
 */
void prompt(void)
{
	if (isatty(stdin))
	{
		/* print a prompt to the user */
		write(1, "$ ", 2);
		fflush(stdout);
	}
}
