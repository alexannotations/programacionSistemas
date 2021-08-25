/* * * * * * * * * * *
 * Programacion en linux
 * PID, UID y variables de ambiente.
 * 
 * Obseve que podemos acceder a información relacionada con nuestro proceso.
 * Dicha información se encuentra almacenada en un arreglo de cadenas llamado 
 * variables de ambiente. Accediendo a dicho arreglo podemos utilizar dentro de
 * nuestro codigo alguna variable que nos interese.
 * 'environ' es una varible definida de manera externa a nuestro programa, debe 
 * encontrarse en los archivos de encabezado.
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
