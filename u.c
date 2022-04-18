#include "main.h"

/**
 *print_uint - prints unsigned int
 *@count: keeping count for printf
 *@n: input int
 *Return: count
 */
int print_uint(int count, unsigned int n)
{
	unsigned int x;
	unsigned int nn = n;
	unsigned int y = 1000000000;

	if (nn < 1)
	{
		_putchar('0' + nn * 1);
		count++;
	}
	while (nn >= 1)
	{
		if (nn >= y)
		{
			x = nn / y;
			_putchar('0' + x);
			count++;
			nn = nn - (x * y);
			y = y / 10;
			while (nn < y)
			{
				_putchar('0' + 0);
				count++;
				y = y / 10;
			}
		}
		else
		{
			y = y / 10;
		}
	}
	return (count);
}
/**
 *print_u - prints unsigned int
 *@count: keeping count
 *@list: argument list
 *Return: new count
 */
int print_u(int count, va_list list)
{
	count = print_uint(count, va_arg(list, unsigned int));
	return (count);
}
