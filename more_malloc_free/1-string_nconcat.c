#include "main.h"
#include <stdlib.h>

/**
 * _strlen - function for length of string
 * @s: the string.
 * Return: length.
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
 * *string_nconcat - concatenate 2 strings
 * @s1: the str1.
 * @s2: the str2.
 * @n: the integer
 * Return: the pointer.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int length1, length2, i, j, length;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}
	length1 = _strlen(s1);
	length2 = _strlen(s2);
	if (n >= (unsigned int)length2)
	{
		length = length1 + length2;
	}
	else
	{
		length = length1 + n;
	}
	concat = malloc((length + 1) * sizeof(char));
	if (concat == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < length1; i++)
		{
			concat[i] = s1[i];
		}
		for (j = 0; j < n && s2[j] != '\0'; j++)
		{
			concat[i + j] = s2[j];
		}
		concat[i + j] = '\0';
		return (concat);
	}
}
