#include "main.h"

/**
 *print_SX - prints hex
 *@count: count
 *@num: num
 *Return: count
 */
int print_SX(int count, unsigned int num)
{
	unsigned int temp_num = num;
	int i = 0, len = 0;
	char hexnum[50];

	if (num <= 15)
	{
		_putchar('0');
		count++;
	}
	while (temp_num != 0)
	{
		num = temp_num % 16;
		if (num < 10)
			num = num + 48;
		else
			num = num + 55;
		hexnum[i] = num;
		i++;
		temp_num = temp_num / 16;
	}
	hexnum[i] = '\0';
	while (hexnum[len] != '\0')
	{
		len++;
	}
	for (i = (len - 1); i >= 0; i--)
	{
		_putchar(hexnum[i]);
		count++;
	}
	return (count);
}
