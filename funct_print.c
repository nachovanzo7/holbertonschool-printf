#include "main.h"
#include <unistd.h>

/**
 *printchar - Imprime un caracter
 *Return: retorna longitud de lo impreso
 *@argumento: es el argumento pasado por parametro
 */

int printchar(va_list argumento)
{
	char c;

	c = va_arg(argumento, int);
	_putchar(c);

	return (1); /* Siempre es 1 la longitud */
}

/**
 *printstr - Imprime una cadena de caracteres
 *Return: retorna la longitud de lo impreso
 *@argumento: es el argumento pasado por parametro
 */

int printstr(va_list argumento)
{
	char *str = va_arg(argumento, char *);
	int len = 0;

	if (str == NULL)
	{
		str = "(null)"
	}
	while (str[len])
	{
		putchar(str[len]);
		len++;
	}
	return(len);
}

/**
 *
 *
 *
 */

