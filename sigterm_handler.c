#include "shell.h"

/**
 * sigterm_handler - a function to handle EOF or SIGTERM.
 *
 * @signum: the signal number.
 */
void sigterm_handler(int signum)
{
	(void)signum;

	shell_print("Ctrl+D (EOF or SIGTERM)\n");
	exit(EXIT_SUCCESS);
}
