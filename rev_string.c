#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @count: keeps count for printf
 * @list: list of arguments
 * Return: updated count
 */
int print_rev(int count, va_list list)
{
	char *s = va_arg(list, char *);
	int i = _strlen(s) - 1;

	if (!s)
		return (-1);
	while (s && i >= 0)
	{
		_putchar(s[i]);
		count++;
		i--;
	}
	return (count);
}
