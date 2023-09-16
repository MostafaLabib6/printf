#ifndef MAIN_H  
#define MAIN_H


#include <stdarg.h> /* used by => va_list, va_start, va_arg, va_end */
#include<string.h> /* used by => strlen */
#include <unistd.h> /* used by => write */

/* Function to be implemeanted */
int _printf(const char *format, ...);


#endif /* MAIN_H */
