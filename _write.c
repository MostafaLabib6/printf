#include "main.h"

/**
 * _putchar - print a character.
 * @c: char.
 * Return: return 1 (length).
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - print a character.
 * @s: pointer to character string.
 * Return: return 1.
*/

int _puts(char *s)
{
	int i = -1;

	while (s[++i])
		_putchar(s[i]);
	return (i);
}
/**
 * write_base - sends characters to be written on standard output
 * @str: String to parse
 */
void write_base(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
}
