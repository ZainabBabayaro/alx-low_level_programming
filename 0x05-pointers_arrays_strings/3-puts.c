#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: string
 */

void _puts(char *str)
{
	int ctr;

	ctr = 0;

	while (*(str + ctr) != '\0')
	{
		_putchar(*(str + ctr));
		ctr++;
	}
	_putchar('\n');
}
