#include "main.h"

/**
 * _printf - Entry Point
 * Desc: _printf function
 * @format: format type
 * Return: Function that produces output according to a format.
 */
int _printf(const char *format, ...)
{
	op_t ops[] = {{"c", op_c}, {"s", op_s}, {"%", op_mod},
		      {"d", op_d}, {"i", op_d}, {"b", op_b}, {NULL, NULL}};
	va_list op_l;
	int i = 0, j;
	int cont = 0, bandera;

	if (format == NULL || (format[i] == '%' && format[(i + 1)] == '\0'))
		return (-1);
	va_start(op_l, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			bandera = 0;
			for (j = 0; ops[j].op != NULL; j++)
			{
				if (format[i + 1] == ops[j].op[0])
				{
					cont += ops[j].f(op_l);
					bandera++;
				}
			}
			if (bandera > 0)
				i++;
			else
			{
				_putchar(format[i]);
				cont++;
			}
		}
		else
		{
			_putchar(format[i]);
			cont++;
		}
	}
	va_end(op_l);
	return (cont);
}
