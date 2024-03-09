#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - add two positive numbers
 * @argc: the number of arguments.
 * @argv: the array containing the strings.
 * Return: 0 on success, 1 on error.
 */

int main(int argc, char *argv[])
{
	int i, num1, num2, result;

	if (argc < 3)
	{
		printf("0\n");
		return 0;
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 + num2;

	for (i = 1; i < argc; i++)
	{
		char *ptr;
		for (ptr = argv[i]; *ptr != '\0'; ptr++)
		{
			if (!isdigit(*ptr))
			{
				printf("Error\n");
				return 1;
			}
		}
	}

	printf("%d\n", result);
	return 0;
}
