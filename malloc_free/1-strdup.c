#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - return a string
 * @str: the str.
 * Return: the s.
 */

char *_strdup(char *str)
{
	char *s;
	unsigned int length;
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}

	for (length = 0; str[length] != '\0'; length++)
	{
	}

	s = malloc((length + 1) * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		s[i] = str[i];
	}

	return (s);
}
