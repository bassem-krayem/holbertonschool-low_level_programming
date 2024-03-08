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

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
