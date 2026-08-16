#include <stdio.h>
#include "Conversion.h"

/*
 * suma — imprime la suma de todos los argumentos interpretados como enteros.
 *
 * Uso: ./suma 1 2 3    →  6
 *      ./suma -5 10    →  5
 *
 * Pista: usa ToInteger de Conversion.h para convertir cada argumento.
 *        Iterá con puntero (char **arg), no con indice entero.
 */

int main(int argc, char *argv[]) {
    if(argc == 1) {printf("Hace falta al menos un numero para sumar\n") ; return 0; }
    int sum = 0;
    for(char** arg=argv + 1; *arg != NULL;arg++) {
        printf("%s is integer? %i\n", *arg, IsInteger(*arg));
        if(IsInteger(*arg)) sum += ToInteger(*arg);
    }
    printf("%i\n",sum);
    return 0;
}
