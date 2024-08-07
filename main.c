#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len = 0;
    int len2 = 0;


    len = _printf("%d", 0);
    len2 = printf("%d\n", 0);

    printf("len = %d\n", len);
    printf("lenDOS = %d\n", len2);
    printf("\n-------------------------\n");

    len = _printf(NULL);
    len2 = printf(NULL);

    printf("len = %d\n", len);
    printf("len2 = %d\n", len2);

    printf("probando caso de im´primir caracter y string\n");
    len = _printf("A char inside a sentence: %c. Did it work?\n", 'F');
    len2 = printf("A char inside a sentence: %c. Did it work?\n", 'F');
    printf("len = %d\n", len);
    printf("len2 = %d\n", len2);
    printf("\n-------------------------\n");
    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    _printf("Decimal:[%d, %i]\n", 32.2, len);
    printf("Decimal:[%d, %i]\n", 32.2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Character:[%c]\n", 'A');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    return (0);
}
