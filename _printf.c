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
							{NULL, NULL}
							};

	/* accumlator to keep tracflagof the number of printed characters*/
	int printed_chars_len = 0;
	int flag, i = -1, j = 0;
	/* buffer to store the string representation of an integer using itoa*/
	/*char tmp_buffer[10000];*/
	va_list args;
	/*check for empty input string*/
	if (format == NULL)
		return (-1);
	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	while (format[++i])
	{
		j = 0, flag = 0;
		if (format[i] == '%') /* % yd */
		{
			if (format[i + 1] == 32 || format[i + 1] == 9) /*check for tab or space */
				i++, printed_chars_len++;
			if (format[i + 1] == '%') /* printf "%%" */
			{
				i += 1, printed_chars_len += _putchar(format[i]);
				continue;
			}
			if (format[i + 1] == '\0') /*"%  %" */
			{
				printed_chars_len = _putchar(format[i]);
				return (printed_chars_len);
			}
			while (format_redear[j].f) /* %   yd*/
			{
				if (format[i + 1] == format_redear[j].f[1])
				{
					printed_chars_len += format_redear[j].print(args); i++; flag = 1;
					break;
				}
				else
					j++;
			}
			if (!flag)
				printed_chars_len += _putchar(format[i]);
		}
		else
			printed_chars_len += _putchar(format[i]);
	}
	/*clear the memory*/
	va_end(args);
	return (printed_chars_len);
}
