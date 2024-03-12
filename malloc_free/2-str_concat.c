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

	while (s[length])
	{
		length++;
	}
	return (length);
}
/**
 * *str_concat - continate 2 strings
 * @s1: string 1.
 * @s2: the string number2.
 * Return: the string.
 */

char *str_concat(char *s1, char *s2)
{
	int length1, length2, i, j;
	char *concatenated;

	if (s1 == NULL)
	{
		length1 = 0;
	}
	else
	{
		length1 = _strlen(s1);
	}
	if (s2 == NULL)
	{
		length2 = 0;
	}
	else
	{
		length2 = _strlen(s2);
	}
	concatenated = malloc(sizeof(char) * (length1 + length2 + 1));
	if (concatenated == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= length1; i++)
	{
		concatenated[i] = s1[i];
	}
	for (j = 0; j <= length2; j++)
	{
		concatenated[length1 + j] = s2[j];
	}
	concatenated[length1 + length2] = '\0';
	return (concatenated);
}
