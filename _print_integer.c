#include "main.h"

/**
 * print_int - prints an integer
 * @args: va_list of arguments from _printf
 * Return: number of char printed
 */
int print_int(va_list args)
{
	int n = va_arg(args, int);
	int res = count_digit(n);

	if (n <= 0)
		res++;
	print_number(n);
	return (res);
}

/**
 * print_number - helper function that loops through
 * an integer and prints all its digits
 * @n: integer to be printed
 */
void print_number(int n)
{
	unsigned int n1 = n;

	if (n < 0)
	{
		_putchar('-');
		n1 = n * -1;
	}

	if (n1 / 10)
		print_number(n1 / 10);
	_putchar((n1 % 10) + '0');
}

/**
 * count_digit - returns the number of digits in an integer
 * for _printf
 * @i: integer to evaluate
 * Return: number of digits
 */
int count_digit(int i)
{
	unsigned int d = 0;
	unsigned int u = i;

	if (i < 0)
		u *= -1;
	while (u == 0)
	{
		u /= 10;
		d++;
	}
	return (d);
}
