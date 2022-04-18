#include "main.h"
/**
 *print_rot13 - prints a string in ROT13
 *@count: to keep count for printf
 *@list: argument list
 *Return: updated count
 */
int print_rot13(int count, va_list list)
{
	char *new_s, *s = va_arg(list, char *);
	int i = 0;

	if (!s)
	{
		count += _printf("(null)");
		return (count);
	}
	new_s = rot13(s);
	if (!new_s)
	{
		count += _printf("(null)");
		return (count);
	}
	while (new_s && new_s[i])
	{
		_putchar(new_s[i]);
		i++;
		count++;
	}
	free(new_s);
	return (count);
}
/**
 *rot13 - translates a string TO rot13
 *@s: the string to translate
 *Return: translated string
 */
char *rot13(char *s)
{
	int i;
	char c;
	char *new_s;
	char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLM[\\]^_`nopqrstuvwxyzabcdefghijklm";

	new_s = _strdup(s);
	if (!new_s)
	{
		return (NULL);
	}
	for (i = 0; new_s[i] != '\0'; i++)
	{
		c = new_s[i];
		if (c >= 'A' && c <= 'z')
			new_s[i] = rot13[c - 65];
	}
	return (new_s);
}
