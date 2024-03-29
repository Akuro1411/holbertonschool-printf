#include "main.h"
/**
 * _printf - function printf selector
 * @format: format
 * Return: Number of printed characters(excluding the null) or numbers.
 */
int _printf(const char *format, ...)
{
	va_list ptr;
	int i = 0;
	int l = 0;

	va_start(ptr, format);
	if (format[0] == '%' && format[1] == '\0')
		return (-1);
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] == '%')
		{
			_putchar ('%');
			i += 1;
			l++;
		}
		else if (format[i] == '%' && format[i + 1] == 'c')
		{
			l += pc(ptr);
			i += 1;
		}
		else if (format[i] == '%' && format[i + 1] == 's')
		{
			l = ps(l, ptr);
			i += 1;
		}
		else if (format[i] == '%' && (format[i + 1] == 'd' || format[i + 1] == 'i'))
		{
			l = print_num(l, ptr);
			i += 1;
		}
		else
		{
			_putchar(format[i]);
			l++;
		}
		i++;
	}
	va_end(ptr);
	return (l);
}
