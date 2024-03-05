#include "main.h"

/**
 * *_strchr - locates a char from a string
 * @s: the string.
 * @c: the character.
 * Return: Returns a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found.
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != c && s[i] != '\0'; i++)
	{
	}

	if (s[i] == c)
		return (s + i);
	else

		return ("nul");
}
