#ifndef MAIN_H
#define MAIN_H

/* INCLUDES */
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <string.h>

/* STRUCTS */
/**
 * struct conversion_specifier - used for function pointers
 * @letter: letter associated with function
 * @f: function to call
 */
typedef struct conversion_specifier
{
	char letter;
	int (*f)(int count, va_list list);
} spec_t;

/* FUNCTION PROTOTYPES */
int _putchar(char c);
int _strlen(char *s);
int _printf(const char *format, ...);
int print_char(int count, va_list list);
int print_string(int count, va_list list);
int print_di(int count, va_list list);
int print_number(int count, unsigned int n);
int print_rev(int count, va_list list);
int print_spec(int *x_ptr, int count, const char *format, va_list list);
int print_percent(int count, const char *format, int *x_ptr);
int print_uint(int count, unsigned int n);
int p_binary(int count, va_list list);
int print_u(int count, va_list list);
int print_o(int count, va_list list);
int print_X(int count, va_list list);
int print_x(int count, va_list list);
int print_px(int count, unsigned long int ptr_val);
int print_p(int count, va_list list);
int print_S(int count, va_list list);
int print_SX(int count, unsigned int num);
int print_rot13(int count, va_list list);
char *rot13(char *s);
char *_strdup(char *str);
#endif