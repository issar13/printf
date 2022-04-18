#include "main.h"
/**
 * print_char - prints a char
 * @count: keeps count for printf func
 * @list: argument to print
 * Return: count
 */
int print_char(int count, va_list list)
{
	char temp_char = (char)va_arg(list, int);

	_putchar(temp_char);
	count++;

	return (count);
}
