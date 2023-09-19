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
/**
 * ascii_code - print ASCII code of non printable characters
 * @i: index
 * @code: ASCII code
 * @symbol: char array
 *
 * Return: 3
 */
int ascii_code(int i, char code, char symbol[])
{
	if (code < 0)
	{
		code *= -1;
	}

	char code_list[] = "1234567890ABCDEF";

	symbol[i++] = code_list[code / 16];
	symbol[i] = code_list[code % 16];

	return (3);
}
