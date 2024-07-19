#include "main.h"
#include <stdarg.h>
#include <stdio.h>

int default_switch(char format, int p, va_list argumento, int *i);

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
					len += default_switch(format[i], len, argumento, &i);
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
*@format: caracter donde estoy parado
*@p: puntero a la longitud dada por _printf
*@argumento: argumento de variadic printf
*@i = int donde estoy posicionado en format
*/
int default_switch(char format, int p, va_list argumento, int *i)
{

	int *puntero = i;

	switch (format)
	{
		case 'c':
			p += printchar(argumento);
			*puntero += 1;
		break;
		case 's':
			p += printstr(argumento);
			*puntero += 1;
		break;

		case '%':
			p += printporc(argumento);
			*puntero += 1;
		break;
		default:
			_putchar('%');
			p += 1;
		break;
	}

	return (p);
}

