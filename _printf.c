#include "main.h"
/**
 * _printf - function printf selector
 * @format: format
 * Return: Number of printed characters excluding the null
 */
int _printf( const char *format, ...)
{
	int i = 0;
	int l = 0;

	va_start(ptr, format);
	while (format[i] != '\0')
	{
		if(format[i] == '%' && format[i+1] == '%' )
		{
			_putchar ('%');
			i+=1;
		}
		else if(format[i] == '%' && format[i+1] == 'c')
		{
			pc();
			i+=1;
		}
		else if(format[i] == '%' && format[i+1] == 's')
		{
			ps();
			i+=1;
		}
		else if(format[i] == '%' && format[i+1] == 'd')
		{
			pd();
			i+=1;
		}
		else if(format[i] == '%' && format[i+1] == 'i')
		{
			pi();
			i+=1;
		}
		else
		{
			_putchar (format[i]);
		}
		i++;
	}
	while (format[l] != '\0')
	{
		l++;
	}
	va_end(ptr);
	return (l);
}
