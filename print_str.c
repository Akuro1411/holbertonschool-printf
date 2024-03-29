#include "main.h"
/**
 * ps - Prints string
 * @len: - the number of elements in string
 * @arg: - va_list element which belong to main file
 * Return: number of characters printed
 */

int ps(int len, va_list arg)
{
	int j = 0;
	char *str;

	str = va_arg(arg, char *);
	if (str == NULL)
	str = "(null)";
	while (str[j] != '\0')
	{
		_putchar(str[j]);
		j++;
		len++;
	}
	return (len);
}
