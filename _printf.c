#include "main.h"
/**
 * _printf - produces an output according to a format
 * @format: str input
 * Return: num of characters printed excluding \0
 */
int _printf(const char *format, ...)
{
	va_list list;
	int x = 0, count = 0;
	int *x_ptr = &x;

	if (format == NULL)
		return (-1);
	va_start(list, format);
	for (; format && format[x]; x++)
	{
		if (count == -1)
			return (-1);
		if (format[x] == '%')
		{
			count = print_spec(x_ptr, count, format, list);
		}
		else
		{
			_putchar(format[x]);
			count++;
		}
	}
	va_end(list);
	return (count);
}
