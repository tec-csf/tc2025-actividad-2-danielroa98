/*
 *  Apuntadores a funciones
 * 
 *  Daniel Roa
 *  A01021960
 */ 
#include <stdio.h>
#include <stdlib.h>

typedef void (* seleccion_u)();

typedef struct Libro
{
    char * titulo;
    int paginas;
}tomo;

int main(int argc, char const *argv[])
{
    seleccion_u * opc = (seleccion_u * ) malloc(sizeof(seleccion_u) * 5);

    int numeros,\
    menu = 0;

    tomo * libro = (tomo *)malloc(sizeof(tomo) * 5);


    return 0;
}
