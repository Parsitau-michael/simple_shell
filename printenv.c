#include "shell.h"
int shell_env(char **args, char __attribute__((__unused__)) **frog);
int shell_setingenv(char **args, char __attribute__((unused__)) **frog);
int shell_unsettingenv(char **args, char __attribute__((__unused__)) **frog);
/**
 * shell_env - prints environment
 * @args:counts the arguenments
 * @frog: double pointer to the beggining of arg count
 * Return: -1 on error else 0
 * Description: prints a variable per line
 */
int shell_env(char **args, char __attribute__((__unused__)) **frog)
{
	int i;
	char numbercounter = '\n';

	if (!environ)
		return (-1);
	for (i = 0; environ[i]; i++)
	{
		write(STDOUT_FILENO, environ[i], _strlen(environ[i]));
		write(STDOUT_FILENO, &numbercounter, 1);
	}
	(void)args;
	return (0);
}
/**
 * shell_setingenv - adds or rwemoves environment variables
 * @args: arguenments on command line
 * @frog: a double pointer to the beggining of args
 * Description: arg[1] name of new path
 * arg[2] value to be changed to
 * Return: -1 if Error, else 0;
 */
int shell_setingenv(char **args, char __attribute__((__unused__)) **frog)
{
	char **env_var = NULL;
	char **first_environ;
	char *new_val;
	size_t size;
	int i;

	if (!args[0] || !args[1])
		return (create_error(args, -1));
	new_val = malloc(_strlen(args[0]) + 1 + _strlen(args[1] + 1));
	if (!new_val)
		return (create_error(arggs, -1));
	_strcpy(new_val, args[0]);
	_strcat(new_val, "=");
	_strcat(new_val, args[1]);
	env_var = _getenv(args[0]);
	if (env_var != NULL)
	{
		free(*env_var);
		*env_var = new_val;
		return (0);
	}
	for (size = 0; environ[size]; size++)
		;
	first_environ[i] = malloc(sizeof(char *) * (size + 2));
	if (first_environ == NULL)
	{
		free(new_val);
		return (create_error(args, -1));
	}
	for (i = 0; environ[i]; i++)
		first_environ[i] = environ[i];
	free(environ);
	environ = firstenviron;
	environ[i] = new_val;
	environ[i + 1] = NULL;
	return (0);
}
/**
 * shell_unsettingenv - deletes an environment variable
 * @args: an array of arguenments
 * @frog: a double pointer to beggining of args
 * Return: if error -1, else 0
 */
int shell_unsettingenv(char **args, char __attribute__((__unused__)) **frog)
{
	char **env_var;
	char **first_environ;
	size_t size;
	int i;
	int i2;

	if (!args[0])
		return (create_error(args, -1));
	env_var = _getenv(args[0]);
	if (!env_var)
		return (0);
	for (size = 0; environ[size]; size++)
		;
	first_environ = malloc(sizeof(char *) * size);
	if (!first_environ)
		return (create_error(args, -1));
	for (i = 0; i2 = 0; environ[i]; i++)
	{
		if (*env_var == env[i])
		{
			free(*env_var);
			continue;
		}
		first_environ[i2] = environ[i];
		i2++;
	}
	free(environ);
	environ = first_environ;
	environ[size - 1] = NULL;
	return (0);
}
