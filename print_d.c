#include "main.h"
/**
 * print_num - function printf number
 * @len: - shows the  length of number
 * @arg: - va_list element from main
 * Return: Number of printed characters(excluding the null) or numbers.
 */
int print_num(int len, va_list arg)
{
	int64_t a;

	a = va_arg(arg, int);
	if (a < 0)
	{
		len++;
	}
	print(a);
	len += count(a);
	return (len);
}

/**
 * count - counts the digits of number
 * @n: - the given number from _printf
 * Return: Number of printed characters(excluding the null) or numbers.
 */


int count(int n)
{
	int l = 1;

	if (n == 0)
		return (0);
	else
		return  (l + count(n / 10));
}

/**
 * print - prints number
 * @a: - the given number from printf
 * Return: Number of printed characters(excluding the null) or numbers.
 */

int print(int64_t a)
{
	if (a < 0)
	{
		_putchar('-');
		a = -a;
	}

	if (a / 10)
		print(a / 10);

	_putchar((a % 10) + '0');
	return (0);
}
