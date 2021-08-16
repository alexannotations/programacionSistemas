/* * * * * * * * * * *
 * Programacion en linux
 * PID, UID y variables de ambiente
 * Linux identifica los procesos a partir de un PID,
 * y los usuarios con UID.
 * 
 * * * * * * * * * * * */

#include<stdio.h>
#include<sys/types.h>

int main()
{
    printf("Identificador de usuario UID: %d\n", getuid());

    pid_t id_proceso;
    pid_t id_padre;

    id_proceso = getpid();
    id_padre = getppid();

    printf("Identificador de proceso: %d\n", id_proceso);
    printf("Identificador del proceso padre: %d\n", id_padre);

}
