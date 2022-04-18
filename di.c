#include "main.h"
/**
 * print_number - prints a number
 * @count: keeping count for printf
 * @n: input int
 * Return: count
 */
int print_number(int count, unsigned int n)
{
	char c = '0';

	if (n == 0)
		return (count);
	if (n / 10)
		count = print_number(count, n / 10);
	_putchar(n % 10 + c);
	count++;
	return (count);
}
/**
 * print_di - prints int
 * @count: keeping count
 * @list: argument list
 * Return: new count
 */
int print_di(int count, va_list list)
{
	int num = va_arg(list, int);

	if (num == 0)
	{
		_putchar('0');
		count++;
		return (count);
	}
	if (num < 0)
	{
		num *= -1;
		_putchar('-');
		count++;
	}
	count = print_number(count, (unsigned int)num);
	return (count);
}
