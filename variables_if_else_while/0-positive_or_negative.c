#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
* main - a function to check if the numbers are negative or positive
*
* Return: allways0.
*/
int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("The number is positive");
}
else if (n == 0)
{
	printf("The number is 0");
}
else
{
	printf("The number is negative");
}
					return (0);
}
