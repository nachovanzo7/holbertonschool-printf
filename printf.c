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
	int i;
	va_list argumentos;

	va_start(argumentos, format);

	/* Bucle - While */

		/* If - verificar si se encuentra '%' */

			/* Switch - cada uno de los tipos */
			/* Llamar funcion correspondiente */
		
}
