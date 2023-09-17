#include <limits.h>
#include <stdio.h>
#include "../main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len, len2;
	len = _printf("Character:[%]\n", 'H');
	len2 =printf("Character:[%]\n", 'H');
	printf("/c length [%d,%d]",len, len2);

	len = _printf("String:[%s]\n", "I am a string !");
	len2 = printf("String:[%s]\n", "I am a string !");
	printf("/c length [%d,%d]", len, len2);
	return (0);
}
