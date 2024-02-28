#include "shell.h"

/**
 * print_env - a function that prints the environment variables.
 */
void print_env(void)
{
	char **env = environ;

	for (; *env != NULL; env++)
	{
		shell_print(*env);
		shell_print("\n");
	}
}
