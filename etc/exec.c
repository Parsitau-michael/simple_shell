#include "shell.h"

/**
 * exec - a function that executes a program.
 *
 * @args: an array of pointers to strings
 * Return: -1 on failure.
 */
int exec(char **args)
{
	if (execve(args[0], args, NULL) == -1)
	{
		perror("Error executing");
	}

	return (0);
}
