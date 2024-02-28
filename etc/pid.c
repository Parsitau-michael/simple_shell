#include "shell.h"
/**
 * findpid - PID of the path
 *
 * Return: my_pid.
 */
int findpid(void)
{
	pid_t my_pid;

	my_pid = getpid();
	return (my_pid);
}