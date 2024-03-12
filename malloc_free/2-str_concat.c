#include "main.h"
#include <stdlib.h>

/**
 * _strlen - Computes the length of a string
 * @s: The string to be measured
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	if (s == NULL)
		return 0;

	while (s[length])
	{
		length++;
	}
	return (length);
}

/**
 * *str_concat - Concatenate 2 strings
 * @s1: String 1.
 * @s2: String 2.
 * Return: The concatenated string.
 */
char *str_concat(char *s1, char *s2)
{
	int length1 = _strlen(s1);
	int length2 = _strlen(s2);
	int i, j;
	char *concatenated;

	concatenated = malloc(sizeof(char) * (length1 + length2 + 1));

	if (concatenated == NULL)
		return (NULL);

	if (s1 != NULL)
	{
		for (i = 0; i < length1; i++)
			concatenated[i] = s1[i];
	}

	if (s2 != NULL)
	{
		for (j = 0; j < length2; j++)
			concatenated[length1 + j] = s2[j];
	}

	concatenated[length1 + length2] = '\0';

	return concatenated;
}
