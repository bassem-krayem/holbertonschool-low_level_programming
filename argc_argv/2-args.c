#include "main.h"
#include <stdio.h>

/**
 * main - prints all the arguments
 * @argc: the arguments.
 * @argv: the array containes the string of arguments.
 * Return: 0;
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
