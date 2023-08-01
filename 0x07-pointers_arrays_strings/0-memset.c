#include "main.h"

char *_memset(char *s, char b, unsigned int n)
{
	char *r = s;

	while (n > 0)
	{
		*r = b;
		r++;
		n--;
	}

	return s;
}
