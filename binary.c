#include "main.h"
/**
 * p_binary - converts UI to binary
 * @count: keeps count for printf
 * @list: input u int
 * Return: keeping count
 */
int p_binary(int count, va_list list)
{
	int x = 0, len = 0;
	char str[33];
	unsigned int num = va_arg(list, unsigned int);

	if (num == 0)
	{
		_putchar(num + '0'), count++;
		return (count);
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
		count++;
	}
	return (count);
}
