#include "main.h"

/**
 * print_alphabet - prints the alphabet
 *
 * Return: 0.
 */

int print_alphabet(void)
{

	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);

	putchar('\n');

	return (0);
}