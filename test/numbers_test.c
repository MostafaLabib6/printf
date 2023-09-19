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
	printf("----------------new checks------\n");
	len = _printf("%u \n", 984515);
	printf("%d\n", len);
	len = _printf("%x\n", 980445);
	printf("%d\n", len);
	len = _printf("%X\n", 980445);
	printf("%d\n", len);
	len = _printf("%o\n", 90445);
	printf("%d\n", len);
	return (0);

}
