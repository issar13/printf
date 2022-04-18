#include "main.h"

/**
 *print_x - prints hexadecimal in lowercase
 *@count: keeps count for printf
 *@list: argument list
 *Return: updated count
 */
int print_x(int count, va_list list)
{
	unsigned int temp_num = va_arg(list, unsigned int);
	unsigned int num;
	int i = 0, len = 0;
	char hexnum[50];

	if (temp_num == 0)
	{
		_putchar(temp_num + '0'), count++;
		return (count);
	}
	while (temp_num != 0)
	{
		num = temp_num % 16;
		if (num < 10)
			num += 48;
		else
			num += 87;
		hexnum[i] = num;
		i++;
		temp_num /= 16;
	}
	hexnum[i] = '\0';
	while (hexnum[len] != '\0')
		len++;
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(hexnum[i]);
		count++;
	}
	return (count);
}
