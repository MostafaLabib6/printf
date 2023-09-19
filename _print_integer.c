#include"main.h"
/**
 * print_integer - Prints an integer
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */

int print_integer(va_list list)
{
	int num_length;

	num_length = print_number(list);
	return (num_length);
}

/**
 * print_number - prints a number send to this function
 * @args: List of arguments
 * Return: The number of arguments printed
 */

int print_number(va_list args)
{
	int n;
	int div;
	int len;
	unsigned int num;

	n  = va_arg(args, int);
	div = 1;
	len = 0;

	if (n < 0)
	{
		len += _putchar('-');
		num = n * -1;
	}
	else
		num = n;

	for (; num / div > 9; )
		div *= 10;

	for (; div != 0; )
	{
		len += _putchar('0' + num / div);
		num %= div;
		div /= 10;
	}

	return (len);
}

/**
 * print_binary - a number send to this function
 * @args: List of arguments
 * Return: The number of arguments printed
 */

int print_binary(va_list args)
{
	int num, i = 0, count = 0, flag = 0;
	char arr[32];

	num = va_arg(args, unsigned int);
	if (num == 0)
		arr[i] = '0';

	while (num > 0)
	{
		arr[i] = (num % 2) + '0';
		num /= 2;
		++i;
		flag = 1;
	}
	if (flag == 1)
		--i;
	count = i;
	while (i  >= 0)
	{
		_putchar(arr[i]);
		--i;
	}
	return (count);

}
