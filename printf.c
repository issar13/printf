#include <stdarg.h>
#include "main.h"
#include <stddef.h>


/**
 * _printf - Reproduce behavior of printf function
 * @format: format string
 * Return: value of printed chars
 */

int _printf(const char *format, ...)
{	
	flags_p fp[] = {
		{"c", print_char},
		{"s", print_str},
		{"i", print_nbr},
		{"d", print_nbr},
		{"b", print_binary},
		{"o", print_octal},
		{"x", print_hexa_lower},
		{"X", print_hexa_upper},
		{"u", print_unsigned},
		{"S", print_str_unprintable},
		{"r", print_str_reverse},
		{"p", print_ptr},
		{"R", print_rot13},
		{"%", print_percent}
	};
	va_list ap;
	int i = 0, j;
	int sum = 0, bandera;

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(ap, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			bandera = 0;
			for (j = 0; fp[j].op != NULL; j++)
			{
				if (format[i + 1] == fp[j].op[0])
				{
					sum += fp[j].f(ap);
					bandera++;
				}
			}
			if (bandera > 0)
				i++;
			else
			{
				_putchar(format[i]);
				sum++;
			}
		}
		else
		{
			_putchar(format[i]);
			sum++;
		}
	}
	va_end(ap);
	return (sum);
}
