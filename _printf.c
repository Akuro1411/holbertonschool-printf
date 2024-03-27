#include "main.h"
/**
 * _printf - function printf selector
 * @format: format
 * Return: Number of printed characters excluding the null
 */
int _printf(const char *format, ...)
{
	int i = 0;

	l = 0;
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
			pc();
			i += 1;
			l++;
		}
		else if (format[i] == '%' && format[i + 1] == 's')
		{
			ps();
			i += 1;
		}
		else
		{
			_putchar (format[i]);
			l++;
		}
		i++;
	}
	va_end(ptr);
	return (l);
}
