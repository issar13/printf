#include "main.h"
/**
 *print_px - prints address in hex
 *@count: keeps count
 *@ptr_val: address
 *Return: count
 */
int print_px(int count, unsigned long int ptr_val)
{
	unsigned long int temp_num = ptr_val;
	unsigned long int num;
	int i = 0, len = 0;
	char hexnum[50];

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
	_putchar('0');
	_putchar('x');
	count += 2;
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(hexnum[i]);
		count++;
	}
	return (count);
}
/**
 *print_p - prints address of ptr in hex
 *@count: keeps count
 *@list: list
 *Return: count
 */
int print_p(int count, va_list list)
{
	void *temp = va_arg(list, void *);
	unsigned long int ptr_val;

	if (temp == NULL)
	{
		count += _printf("(nil)");
		return (count);
	}
	ptr_val = *(unsigned long int *) &temp;
	count = print_px(count, ptr_val);
	return (count);
}
