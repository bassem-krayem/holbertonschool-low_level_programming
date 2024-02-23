#include <stdio.h>
/**
 * main - prints alphabet 2 times one with lower case and upper case
 *
 * Return: 0.
 */
int main()
{
    char i;

    putchar("(upper)\n");
    for (i = 'A'; i <= 'Z'; i++)
        putchar(i);

    for (i = 'a'; i <= 'z'; i++)
        putchar(i);

    return 0;
}
