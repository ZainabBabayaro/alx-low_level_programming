#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length of the string
 */

int _strlen(char *s)
{
	int ctr;

	ctr = 0;

	while (s[ctr] != '\0')
	{
		ctr++;
	}

	return (ctr);
}
