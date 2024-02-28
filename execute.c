#include "shell.h"

/**
 * execute - a function that executes a program.
 *
 * @args: an array of pointers
 * Return:0 on success, -1 on failure.
 */
int execute(char **args)
{
	int status;

	/* creating a process */
	pid_t pid = fork();

	if (pid == -1)
	{
		perror("Failed to fork process");
		exit(EXIT_FAILURE);
	}

	/* We are in the child process */
	if (pid == 0)
	{
		/* execute a program here */
		if (execve(args[0], args, environ) == -1)
		{
			perror(args[0]);
			exit(EXIT_FAILURE);
		}

	}
	else
	{
		/* we are in the parent process */
		wait(&status);
	}
	return (0);
}
