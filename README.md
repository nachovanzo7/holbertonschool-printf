# PRINTF

`printf` es una herramienta poderosa para generar salidas en scripts de shell. A diferencia del comando `echo`, `printf` permite un mayor control sobre el formato de la salida, lo que lo hace ideal para situaciones en las que se requiere precisión.

## SINTAXIS
La sintaxis básica de `printf` es:
>printf(FORMAT, [ARGUMENTS...]);

Donde FORMAT es una cadena que contiene texto fijo y especificadores de formato que se sustituyen por los valores de ARGUMENTS.

## Especificadores de formato

Los especificadores de formato son secuencias de caracteres que comienzan con `%` y determinan cómo se deben mostrar los argumentos. Aquí algunos de los especificadores más comunes:
`%c`: character
`%s`: Cadena de texto
`%d` o `%i`: Entero con signo
`%%`: Carácter de porcentaje literal

## EJEMPLOS

>printf "Hola, %s!\n" "mundo"
