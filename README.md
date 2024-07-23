 # PRINTF

**`printf`** es una herramienta poderosa para generar salidas en scripts de shell. A diferencia del comando **`echo`**, **`printf`** permite un mayor control sobre el formato de la salida, lo que lo hace ideal para situaciones en las que se requiere precisión.

## SINTAXIS
La sintaxis básica de **`printf`** es:
>printf(FORMAT, [ARGUMENTS...]);

Donde FORMAT es una cadena que contiene texto fijo y especificadores de formato que se sustituyen por los valores de ARGUMENTS.

## Especificadores de formato

Los especificadores de formato son secuencias de caracteres que comienzan con `%` y determinan cómo se deben mostrar los argumentos. Aquí algunos de los especificadores más comunes:
**`%c`**: character
**`%s`**: Cadena de texto
**`%d`** o **`%i`**: Entero con signo
**`%%`**: Carácter de porcentaje literal

## EJEMPLOS

>printf "Hola, %s!\n" "mundo"

## RETORNO

La función printf devuelve un entero (**`int`**) que representa la cantidad de caracteres impresos (excluyendo el carácter nulo de terminación).

## FLOWCHART

![Diagrama en blanco](https://github.com/user-attachments/assets/e545338d-5f6e-46eb-ad4d-c7de803cb426)

## ARCHIVOS

### main.h

Los prototipos de todas las funciones utilizadas en PRINTF están incluidas en el archivo de encabezado "**main.h**".

*Librerias incluidas* - **<stdarg.h>**

### _putchar.c

Contiene la función putchar, y se usa para imprimir un solo carácter en la salida estándar.
En caso de éxito **retorna 1**, si ocurre un error **retorna -1**.

*Librerias incluidas* - **<unistd.h>**

### funct_print.c

Todas las funciones derivadas de cada **especificador de formato** (*Ejemplo: %s --> printstring*) utilizadas en PRINTF se encuentran desarrolladas en éste archivo.

*Librerias incluidas* - **<stdarg.h>**
                      - **<unistd.h>**

*Funciones* - **printchar**: Imprime un caracter
            - **printstr**: Imprime una cadena de caracteres
            - **printporc**: Imprime el caracter porcentaje
            - **printint**: Imprime un numero entero
            - **printfloat**: Imprime un numero decimal

### printf.c

En el archivo *printf.c* se desarrolla la función **`printf`** y se utiliza para imprimir texto formateado en la salida estándar.
En ésta función es donde dependiendo del **especificador de formato** (%c, %s, %%, %i o %d) se le va a derivar a su función delegada (alojada en funct_print) mediante el uso de un *switch*.

Delegación de **función** a su respectivo **especificador de formato**:
- **%c** ---> **printchar**
- **%s** ---> **printstr**
- **%%** ---> **printporc**
- **%i** ---> **printint**
- **%d** ---> **printfloat**

*Función auxiliar*: - **default_switch**: se utiliza para el correcto funcionamiento del *switch* y captar todos los posibles **especificadores de formato**.
Se creó por consecuencia de no poder escribir +40 lineas dentro de cada función creada.

