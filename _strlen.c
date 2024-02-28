#include "shell.h"

/**
 * _strlen - a function that returns the length of a string.
 *
 * @str: the string.
 * Return: the length of the string.
 */
size_t _strlen(char *str)
{
	size_t len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}

	return (len);
}
