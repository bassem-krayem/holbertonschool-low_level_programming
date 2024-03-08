#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of the arguments entered in the comand
 * @argc: the number of args.
 * @argv: unused variable.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	(void)argv;
	if (argc > 1)
	{
		printf("%d\n", argc);
	}
	else
		printf("0");

	return (0);
}
