#include "shell.h"

/**
 * _strcmp - a function that compares two strings.
 *
 * @str1: first string.
 * @str2: second string.
 * Return:positive integer if s1 is greater, negative integer if s2 is greater
 * and 0 if both strings are equal.
 */
int _strcmp(char *str1, char *str2)
{
	while (*str1 != '\0' && *str2 != '\0')
	{
		if (*str1 != *str2)
		{
			return (*str1 - *str2);
		}
		str1++;
		str2++;
	}

	return (*str1 - *str2);
}
