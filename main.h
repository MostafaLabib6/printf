#ifndef MAIN_H
#define MAIN_H


#include <stdarg.h> /* used by => va_list, va_start, va_arg, va_end */
#include<string.h> /* used by => strlen */
#include <unistd.h> /* used by => write */


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
/*print_char*/
int print_char(va_list arg);
/*print_string*/
int print_string(va_list arg);
/*get_print*/
int get_print(const char *format, va_list arg, struct formats *format_redear);

#endif /* MAIN_H */
