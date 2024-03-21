#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*f)(int, int);
	char operator;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	f = get_op_func(argv[2]);

	if (f == NULL)
	{
		printf("Error\n");
		return (99);
	}

	operator== * argv[2];

	if ((operator== '/' || operator== '%') && num2 == 0)
	{
		printf("Error\n");
		return 100;
	}
	result = f(num1, num2);
	printf("%d\n", result);
	return (0);
}
