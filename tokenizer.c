#include "shell.h"

/**
 * tokenizer - a function that tokenizes a string.
 *
 * @s: the string to be tokenized.
 * Return: an array of pointers to the tokens.
 */
char **tokenizer(char *s)
{
	char **tokens = malloc(sizeof(char *) * MAX_T);
	char *token = NULL;
	int i = 0;

	if (tokens == NULL)
	{
		perror("Memory allocation failure");
		exit(EXIT_FAILURE);
	}

	token = strtok(s, " \t\n");
	while (token && i < MAX_T)
	{
		tokens[i] = token;
		token = strtok(NULL, " \t\n");
		i++;
	}

	tokens[i] = NULL;

	return (tokens);
}
