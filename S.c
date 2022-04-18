#include "main.h"
/**
 *print_S - prints /x then special char val in hex
 *@count: keeps count
 *@list: va_list
 *Return: count
 */
int print_S(int count, va_list list)
{
	char *temp_string = va_arg(list, char *);
	int x = 0;
	unsigned int num = 0;

	if (!temp_string)
	{
		count += _printf("(null)");
		return (count);
	}
	while (temp_string && temp_string[x])
	{
		if ((temp_string[x] > 0 && temp_string[x] < 32) ||
			temp_string[x] >= 127)
		{
			_putchar('\\');
			count++;
			_putchar('x');
			count++;
			num = (unsigned int) temp_string[x];
			count = print_SX(count, num);
			x++;
		}
		_putchar(temp_string[x]);
		x++;
		count++;
	}
	return (count);
}
