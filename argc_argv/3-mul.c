#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplie 2 numbers
 * @argc: the arguments.
 * @argv: the array of the strings.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
