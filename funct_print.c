#include "main.h"
#include <unistd.h>
#include <stdarg.h>

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
		str = "(null)";
	}
	while (str[len])
	{
		_putchar(str[len]);
		len++;
	}
	return (len);
}

/**
 *printporc - Imprime el caracter porcentaje
 *Return: retorna la longitud de lo impreso
 *@argumento: es el argumento pasado por parametro
 */

int printporc(va_list argumento)
{
	(void)argumento;

	_putchar('%');

	return (1);
}

/**
 *printint - Imprime un numero entero
 *Return: retorna la longitud de lo impreso
 *@argumento: es el argumento pasado por parametro
 */

int printint(int argumento)
{
	int len = 0;
	unsigned int num;
	char copia[10];
	int i = 0;
	
	if (argumento == 0)
	{
		_putchar('0');
		len += 1;
	}

	if (argumento < 0) /* Si el numero es negativo */
	{
		_putchar('-');
		num = -argumento; /*Valor absoluto */
		len++;
	}
	else /* Si el numero es positivo */
	{
		num = argumento;
	}

	while (num > 0) /* Recorro cada posición del enteo  */
	{
		copia[i++] = (num % 10) + '0'; /* Calculo cuántas decenas equivale*/
						/*y guardo el dígito en el buffe*/
		num /= 10; /*Evaluo el próxim digit*/
	}

	while (i > 0) /*Imprimo los dígitos en orden invers*/
	{
		_putchar(copia[--i]);
		len++;
	}


	return (len);
}



/**
 *printfloat - Imprime un numero decimal
 *Return: retorna la longitud de lo impreso
 *@argumento: es el argumento pasado por parametro
 */

int printfloat(int argumento)
{
	int len = 0;
	unsigned int num;
	char copia[10];
	int i = 0;
	
	if (argumento == 0)
	{
		_putchar('0');
		len += 1;
	}

	if (argumento < 0) /* Si el numero es negativo */
	{
		_putchar('-');
		num = -argumento; /*Valor absoluto */
		len++;
	}
	else /* Si el numero es positivo */
	{
		num = argumento;
	}

	while (num > 0) /* Recorro cada posición del enteo  */
	{
		copia[i++] = (num % 10) + '0'; /* Calculo cuántas decenas equivale*/
						/*y guardo el dígito en el buffe*/
		num /= 10; /*Evaluo el próxim digit*/
	}

	while (i > 0) /*Imprimo los dígitos en orden invers*/
	{
		_putchar(copia[--i]);
		len++;
	}


	return (len);
}
