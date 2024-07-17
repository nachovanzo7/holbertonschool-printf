#ifndef PRINT_F
#define PRINT_F

#include <stdarg.h>

int _putchar(char c);
int printchar(va_list argumento);
int printstr(va_list argumento);
int printporc(va_list argumento);
int printdecimal(va_list argumento);
int printint(va_list argumento);
int _printf(const char *format, ...);

#endif
