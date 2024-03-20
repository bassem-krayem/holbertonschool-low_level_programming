#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 * @str: The string to convert.
 *
 * Return: A pointer to the modified string.
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	/* Iterate through the string */
	while (*ptr != '\0')
	{
		/* Check if the character is lowercase */
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			/* Convert lowercase letter to uppercase */
			*ptr -= 32;
		}
		/* Move to the next character */
		ptr++;
	}

	return (str);
}
