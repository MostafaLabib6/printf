#include"main.h"

/**
 * _printf - function that produces output according to a format
 * @format: an array of chars
 *
 *
 * Return: int printed chars length
 */

int _printf(const char *format, ...)
{
	fm format_redear[] = {
						{"%c", print_char}, {"%s", print_string},
						{"%d", print_int}, {"%i", print_int},
						{NULL, NULL}
						};

	va_list args;
	int printed_chars_len = 0;

	/*check for empty input string*/
	if (format == NULL)
		return (-1);

	va_start(args, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	printed_chars_len = get_print(format, args, format_redear);
	return (printed_chars_len);

}
