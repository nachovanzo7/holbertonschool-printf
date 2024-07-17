#include "main.h"
#include <stdarg.h>

/**
 *_printf - Imprimir una cadena de texto, aplicando especificadores de comando
 *Return: retorna la longitud de la cadena impresa (int)
 *@format: Cadena de texto donde se incluyen (o no) los especificadores
 */

int _printf(const char *format, ...)
{
	/* Atributos */
	int i = 0;
	va_list argumento;

	va_start(argumento, format);

	/* Bucle - While */
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;

			switch (format[i])
			{ 
				case "c":
					printchar(argumento);
				break;

				case "s":
					printstr(argumento);
				break;

				case "%":
					printporc(argumento);
				break;

				case "d":
					printdecimal(argumento);
				break;

				case "i":
					printint(argumento);
				break;
			}
		}	
	}	
		
		

		/* If - verificar si se encuentra '%' */

			/* Switch - cada uno de los tipos */
			/* Llamar funcion correspondiente */
		
}
