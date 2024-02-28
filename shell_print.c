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
	int written;

	if (s == NULL)
		return (-1);

	while (s[len] != '\0')
	{
		len++;
	}

	written = write(1, s, len);

	if (written == -1)
	{
		perror("");
		exit(EXIT_FAILURE);
	}
	return (written);
}
