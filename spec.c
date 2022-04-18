#include "main.h"
/**
 * print_spec - list of normal specifiers
 * @x_ptr: to maintain index position of format
 * @count: to keep counting
 * @format: input string
 * @list: argument list
 * Return: count
 */
int print_spec(int *x_ptr, int count, const char *format, va_list list)
{
	int i = 0, signal = 0;
	spec_t specs[] = {
		{'c', print_char}, {'s', print_string}, {'d', print_di}, {'i', print_di},
		{'r', print_rev}, {'b', p_binary}, {'u', print_u}, {'o', print_o},
		{'X', print_X}, {'x', print_x}, {'p', print_p}, {'S', print_S},
		{'R', print_rot13}, {'\0', NULL}
	};

	for (; specs[i].letter; i++)
	{
		if (specs[i].letter == format[*(x_ptr) + 1])
		{
			count = specs[i].f(count, list);
			*(x_ptr) += 1, signal = 1;
		}
	}
	if (signal == 0)
	{
		count = print_percent(count, format, x_ptr);
	}
	return (count);
}
