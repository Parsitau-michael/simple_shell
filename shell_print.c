#include "shell.h"

/**
 * shell_print - writes the string s to stdout
 * @s: The string to print
 *
 * Return: On success, the number of characters written.
 * On error, -1 is returned, and errno is set appropriately.
 */
int shell_print(char *s)
{
	size_t len = 0;

	if (s == NULL)
		return (-1);

	while (s[len] != '\0')
	{
		len++;
	}
	return (write(1, s, len));
}
