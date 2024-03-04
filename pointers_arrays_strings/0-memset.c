#include "main.h"

char *_memset(char *s, char b, unsigned int n)
{
	_memset(s + 0, b, n);
	return (s);
}
