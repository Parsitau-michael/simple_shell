#include "shell.h"

/**
 * tokenize - a function that tokenizes a string.
 *
 * @s: the string to be tokenized.
 * Return: an array of pointers to the tokens.
 */
char **tokenize(char *s, char *delim)
{
	char **tokens = malloc(sizeof(char *) * MAX_T);
	char *token = NULL;
	int i = 0;

	if (tokens == NULL)
	{
		perror("Memory allocation failure");
		exit(EXIT_FAILURE);
	}

	token = strtok(s, delim);
	while (token && i < MAX_T)
	{
		tokens[i] = token;
		token = strtok(NULL, delim);
		i++;
	}

	tokens[i] = NULL;

	return (tokens);
}
