#ifndef MAIN_H
#define MAIN_H


#include <stdarg.h> /* used by => va_list, va_start, va_arg, va_end */
#include<string.h> /* used by => strlen */
#include <unistd.h> /* used by => write */
#include <stdlib.h>

/**
 * struct formats - Struct formats
 *
 * @f: The specifier.
 * @print: The function associated.
 */

struct formats
{
	char *f;
	int (*print)(va_list);
};

typedef struct formats fm;



/* Function to be implemeanted */
/*_printf file*/
int _printf(const char *format, ...);
/*_write file*/
int _putchar(char c);
int _puts(char *s);
void write_base(char *str);
/*print_char*/
int print_char(va_list arg);
/*print_string*/
int print_string(va_list arg);
/*get_print*/
int get_print(const char *format, va_list arg, struct formats *format_redear);
/*_print_integer*/
int print_integer(va_list list);
int print_number(va_list args);
int print_binary(va_list args);
/*helper_function*/
unsigned int base_len(unsigned int num, int base);
char *rev_string(char *s);
char *_memcpy(char *dest, char *src, unsigned int n);
#endif /* MAIN_H */
