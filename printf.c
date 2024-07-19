#include "main.h"
#include <stdarg.h>
#include <stdio.h>

int default_switch(char i, int *p, va_list argumento);

/**
 *_printf - Imprimir una cadena de texto, aplicando especificadores de comando
 *Return: retorna la longitud de la cadena impresa (int)
 *@format: Cadena de texto donde se incluyen (o no) los especificadores
 */

int _printf(const char *format, ...)
{
	int i = 0, len = 0;
	va_list argumento;

	va_start(argumento, format);
	while (format && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'd':
					len += printfloat(argumento);
					i++;
				break;
				case 'i':
					len += printint(va_arg(argumento, int));
					i++;
				break;
				case '\0':
					return (-1);
				break;
				default:
					default_switch(format[i], &len, argumento);
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
	if (format == NULL)
		return (-1);
	va_end(argumento);
	return (len);
}


/**
*default_switch - Recurso de respaldo por "lines" betty
*Return: retorna la longitud de lo impreso
*@i: caracter donde estoy parado
*@p: puntero a la longitud dada por _printf
*@argumento: argumento de variadic printf
*/
int default_switch(char i, int *p, va_list argumento)
{
	int *len = p;

	switch (i)
	{
		case 'c':
			*len += printchar(argumento);
			i++;
		break;
		case 's':
			*len += printstr(argumento);
			i++;
		break;

		case '%':
			*len += printporc(argumento);
			i++;
		break;
		default:
			_putchar('%');
			*len += 1;
		break;
	}

	return (*len);
}
