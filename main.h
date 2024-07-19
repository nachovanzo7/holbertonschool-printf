#ifndef PRINT_F
#define PRINT_F

#include <stdarg.h>

int _putchar(char c);
int printchar(va_list argumento);
int printstr(va_list argumento);
int printporc(va_list argumento);
int printfloat(int argumento);
int printint(int argumento);
int _printf(const char *format, ...);

#endif
