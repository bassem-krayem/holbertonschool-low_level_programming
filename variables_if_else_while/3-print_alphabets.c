#include <stdio.h>
/**
 * main - prints alphabet 2 times one with lower case and upper case
 *
 * Return: 0.
 */
int main()
{
    char alphabet;

    for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
        putchar(alphabet);

    for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
        putchar(alphabet);

    putchar("\n");
    return 0;
}
