#include"main.h"

/**
 * get_print - helper function for print.
 * @format: string.
 * @arg: string.
 * @format_redear: string.
 * Return: Integer.
*/

int get_print(const char *format, va_list arg, struct formats *format_redear)
{
	/* accumlator to keep tracflagof the number of printed characters*/
	int printed_chars_len = 0;
	int flag, i = -1, j = 0;

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
					printed_chars_len += format_redear[j].print(args), i++, flag = 1;
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
