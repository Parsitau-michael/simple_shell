#include "shell.h"

/**
 * word_len - a function that returns the number of words in a string.
 *
 * @str: the string whose words are to be counted.
 * @delim: a string of the delimiting characters.
 * Return: the number of words.
 */
size_t word_len(char *str, char *delim)
{
	size_t len = 0;

	if (strtok(str, delim) != NULL)
		len++;
	while (strtok(NULL, delim))
		len++;
	return (len);
}

/**
 * tokenize - a function that tokenizes a string.
 *
 * @s: the string to be tokenized.
 * Return: an array of pointers to the tokens.
 */
char **tokenize(char *str, char *delim)
{
	char **tokens = NULL;
	size_t num_tokens = 0;
	size_t str_len = strlen(str);
	size_t i = 0; /* for array */
	size_t j = 0; /* for string */
	char prev = '\0';

	num_tokens = word_len(str, delim);

	if (num_tokens > 0)
	{
		tokens = malloc(sizeof(char *) * (num_tokens + 1));

		if (tokens == NULL)
		{
			perror("Malloc failed");
			exit(EXIT_FAILURE);
		}

		for (j = 0; j < str_len; j++)
		{
			if (str[j] != '\0' && prev == '\0')
			{
				tokens[i] = str + j; /* &str[0] */
				i++;
			}
			prev = str[j];
		}
		tokens[i] = NULL;
	}

	return (tokens);
}

/**
 * free_array - a function that frees array values
 *
 * @array: the array block to be freed.
 */
void free_array(char **array)
{
	int i, count = 0;

	while (array[count])
		count++;
	
	for (i = 0; i < count; i++)
	{
		free(array[count]);
	}
	
	free(array);
}
