#include "main.h"

/**
 *print_o - prints octal of num
 *@count: keeps count
 *@list: va_list
 *Return: count
 */
int print_o(int count, va_list list)
{
	int x = 0, len = 0;
	char str[20];
	unsigned int num = va_arg(list, unsigned int);

	if (num == 0)
	{
		_putchar(num + '0'), count++;
		return (count);
	}
	while (num != 0)
	{
		str[x] = (num % 8) + 48;
		num = num / 8;
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
		count++;
	}
	return (count);
}
