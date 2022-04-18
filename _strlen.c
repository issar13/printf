#include "main.h"
/**
 * _strlen - gets length of string
 * @s: the string
 * Return: string length
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}
