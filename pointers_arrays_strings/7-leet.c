#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The string to encode.
 *
 * Return: A pointer to the modified string.
 */
char *leet(char *str)
{
	char *s = str;
	char *letters = "aAeEoOtTlL";
	char *leet_code = "43071";
	int i, j;

	while (*s)
	{
		i = 0;
		j = 0;

		while (letters[j])
		{
			if (*s == letters[j])
			{
				*s = leet_code[i];
				break;
			}
			j++;
			i++;
		}
		s++;
	}

	return (str);
}
