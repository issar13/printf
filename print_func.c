#include "main.h"
/**
 * op_c - Entry Point
 * Desc: op_c function
 * @op_l: va_list printf function
 * Return: Char
 */
int op_c(va_list op_l)
{
	_putchar(va_arg(op_l, int));
	return (1);
}
/**
 * op_s - Entry Point
 * Desc: op_s function
 * @op_l: va_list op_l
 * Return: String
 */
int op_s(va_list op_l)
{
	char *s = va_arg(op_l, char *);

	int cont = 0;

	if (s == NULL)
	{
		s = "(null)";
	}

	while (s[cont] != '\0')
	{
		_putchar(s[cont]);
		cont++;
	}
	return (cont);
}
/**
 * op_mod - Entry Point
 * Desc: op_mod function
 * @op_l: va_list op_l
 * Return: %
 */
int op_mod(__attribute__((unused)) va_list op_l)
{
	_putchar('%');
	return (1);
}
/**
 * op_d - Entry Point
 * Desc: op_d function that prints an decimal integer
 * @op_l: va_list op_l
 * Return: numbers of integer printed.
 */
int op_d(va_list op_l)
{
	unsigned int g, f, c = 0, i = 0;
	unsigned long int b = 1;
	int num = va_arg(op_l, int);

	if (num == 0)
	{
		_putchar(num + '0');
		return (i + 1);
	}
	if (num < 0)
	{
		_putchar('-');
		g = num * (-1);
	}
	else
	{
		g = num;
	}

	f = g;
	while (g != 0)
	{
		g = g / 10;
		b = b * 10;
		c++;
	}
	b = b / 10;
	i = c;
	while (c != 0)
	{
		_putchar((f / b) + '0');
		f = f % b;
		b = b / 10;
		c--;
	}
	if (num < 0)
		i++;

	return (i);
}
/**
 * op_d - Entry Point
 * Desc: op_d function that prints an decimal integer
 * @op_l: va_list op_l
 * Return: numbers of integer printed.
 */
int op_b(va_list op_l)
{
    int cont = 0;
    int x = 0, len = 0;
	char str[33];
	unsigned int num = va_arg(op_l, unsigned int);

	if (num == 0)
	{
		_putchar(num + '0'), cont++;
		return (cont);
	}
	while (num != 0)
	{
		str[x] = (num % 2) + 48;
		num = num / 2;
		x++;
	}
	str[x] = '\0';
	for (x = 0; str[x] != '\0'; x++)
	{
		len++;
	}
	for (x = (len - 1); x >= 0; x--)
	{
		_putchar(str[x]);
		cont++;
	}
	return (cont);
}