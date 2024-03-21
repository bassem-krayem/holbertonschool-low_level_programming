#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - entry point for function
 * @argc: arg counter, number of args
 * @argv: array of pointers to args
 *
 * Return: 0 on success, 98 on failure
 */

int main(int argc, char *argv[])
{
	int num1, num2, sum;
	char operator;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	operator = * argv[2];

	if ((operator == '/' || operator == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	sum = f(num1, num2);
	printf("%d\n", sum);
	return (0);
}
