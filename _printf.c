#include"main.h"
#include <stdio.h>
/**
 * _printf - function that produces output according to a format
 * @format: an array of chars
 *
 *
 * Return: int printed chars length
 */

int _printf(const char *format, ...)
{
	/* accumlator to keep track of the number of printed characters*/
	int printed_chars_len = 0;
	/* buffer to store the string representation of an integer using itoa*/
	/*char tmp_buffer[10000];*/

	va_list args;
	va_start(args, format);

	/*check for empty input string*/
	if (format == NULL)
		return (-1);

	while (*format != '\0')
	{
		if (*format != '%')
		{
			write(1, format, 1);
			++printed_chars_len;
		}
		else
		{
			++format;
			if (*format == '%')
			{
				write(1, format, 1);
				++printed_chars_len;
			}
			else if (*format == 'c')
			{
				char c = va_arg(args, int);
				write(1, &c, 1);
				++printed_chars_len;
			}
			else if (*format == 's')
			{
				char *s = va_arg(args, char *);
				write(1, s, strlen(s));
				printed_chars_len += strlen(s);
			}
			/*
			else if (*format == 'd' || *format == 'i')
			{
				int num = va_arg(args, int);
				itoa(num, tmp_buffer, 10); convert integer to string
				write(1, tmp_buffer, strlen(tmp_buffer));
				printed_chars_len += strlen(tmp_buffer);
			}
			*/
		}
		++format;
	}
	/*clear the memory*/
	va_end(args);
	printf("lol :%d\n",printed_chars_len);
	return (printed_chars_len);

}
