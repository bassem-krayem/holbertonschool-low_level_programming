#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @s: The string to encode.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *s)
{
	char *r = s;						  /* Pointer to the original string */
	char a[] = {'a', 'e', 'o', 't', 'l'}; /* Array of characters to replace */
	char n[] = {'4', '3', '0', '7', '1'}; /* Array of replacement characters */
	int i;

	while (*s)
	{
		for (i = 0; i < 5; i++)
		{
			/**
			 * Check if the current character
			 * matches any of the characters to replace
			 */
			if (*s == a[i] || *s == a[i] - 32)
				/* Replace the character with the corresponding replacement character */
				*s = n[i];
		}
		s++; /* Move to the next character in the string */
	}

	return (r); /* Return a pointer to the modified string */
}
