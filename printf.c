#include "main.h"
#include <stdarg.h>

/**
 *_printf - Imprimir una cadena de texto, aplicando especificadores de comando
 *Return: retorna la longitud de la cadena impresa (int)
 *@format: Cadena de texto donde se incluyen (o no) los especificadores
 */

int _printf(const char *format, ...)
{
	int i = 0, len;
	va_list argumento;

	va_start(argumento, format);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					len = printchar(argumento);
					i++;
				break;

				case 's':
					len = printstr(argumento);
					i++;
				break;

				case '%':
					len = printporc(argumento);
					i++;
				break;

				case 'd':
					len = printfloat(argumento);
					i++;
				break;

				case 'i':
					len = printint(va_arg(argumento, int));
					i++;
				break;
			}
		}
		else
		{
			_putchar(format[i]);
			i++;
			len++;
		}
	}
	va_end(argumento);
	return (len);
}
