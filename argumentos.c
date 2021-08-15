/* * * * * * * * * * *
 * Programacion en linux
 * Paso de argumentos
 * 
 * El SO a través del shell, puede enviarle información al programa cuando inicia.
 * Esto se logra con ayuda de los parámetros en la función principal. El SO va a colocar
 * en la variable 'argc' el numero de parametros que introduzca el usuario en la línea de 
 * comandos. La variable 'argv' almacena un arreglo de cadenas de caracteres, donde cada una
 * de las cadenas contiene un argumento, comenzando por el nombre del programa, el cual se 
 * almacena en 'argv[0]', el siguiente argumento en 'argv[1]' y así sucesivamente. La última 
 * cadena en el arreglo tendrá siempre un apuntador a NULL. Y como es normal C, cada cadena 
 * va a terminar con el caracter fin de cadena '\0'.
 * 
 * 'argc' es un contador de los parametros pasados a la función, 
 * comenzando desde [0] siendo el nombre del programa.
 * 
 * 'argv' es un puntero de vectores que contiene los valores de los parametros 
 * (cadenas de texto) que se introdujeron.
 * 
 * 'gcc argumentos.c -o programaCompilado'
 *  
 * * * * * * * * * * * */

#include<stdio.h>   // para printf
#include<stdlib.h> // para instrucción exit
#include <string.h> // manejo de cadenas

int main(int argc, char *argv[])
{
    
    printf("\n");
    int tokens;

    for (tokens = 0; tokens < argc; tokens++)
    {
        if (argv[tokens][0] == '-')
        {
            printf("Opcion: %s\n", argv[tokens]+1);
        }
        else
        {
            int lenArg = strlen(argv[tokens]);
            printf("[%d] Longitud: %d \t", tokens, lenArg);
            printf("Argumento: %s\n", argv[tokens]);
        }
    }

/* * * * * 
 * Suponga que no se dispone del argumetno 'argc' en la función principal, 
 * de modo que no se conoce el número de argumentos que el usuario introdujo 
 * en la linea de comandos. Modifique el programa para que realice el mismo
 * trabajo sin utilizar 'argc'.
 * Resp.: En lugar del ciclo 'for', usar un ciclo infinito tomando como 
 * condición de detención:
 * 'argv[tokens] != NULL' 
 * * * * */
    printf("\n");
    tokens = 0;

    while (argv[tokens] != NULL)
    {
            if (argv[tokens][0] == '-')
        {
            printf("Opcion: %s\n", argv[tokens]+1);
        }
        else
        {
            printf("Argumento %d: %s\n", tokens, argv[tokens]);
        }
        tokens++;
    }     

    printf("\n");    
    exit (0);
}
