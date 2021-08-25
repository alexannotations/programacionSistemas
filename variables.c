/* * * * * * * * * * *
 * Programacion en linux
 * PID, UID y variables de ambiente
 * Linux identifica los procesos a partir de un PID,
 * y los usuarios con UID.
 * 
 * Obseve que podemos acceder a información relacionada con nuestro proceso.
 * Dicha información se encuentra almacenada en un arreglo de cadenas llamado 
 * variables de ambiente. Accediendo a dicho arreglo podemos utilizar dentro de
 * nuestro codigo alguna variable que nos interese.
 * Comandos: 'env' OR 'printenv'
 * 
 * * * * * * * * * * * */

#include<stdlib.h>
#include<stdio.h>

extern char **environ;

int main(int argc, char *argv[])
{
    int j;

    printf("Las variables de entorno para %s son:\n", argv[0]);

    for (j = 0; environ[j] != NULL; j++)
        printf("environ[%d] = %s\n", j, environ[j]);
    
    printf("La varible $HOME: %s\n", getenv("HOME"));
    
    return 0;

}
