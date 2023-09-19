#include "main.h"

/**
 * non_printable_char - know if a char is printable
 * @c: char
 *
 * Return: 0, 1
 */
int non_printable_char(char c)
{
	if (c >= 32 || c < 127)
	{
		return (1);
	}

	return (0);
}
