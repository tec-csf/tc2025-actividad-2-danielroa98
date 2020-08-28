/*
 *  Apuntadores a funciones
 * 
 *  Daniel Roa
 *  A01021960
 */ 
#include <stdio.h>
#include <stdlib.h>

#define N 5

typedef void (* seleccion_u)();

typedef struct Libro
{
    char * titulo;
    int paginas;
}Libro;

void imprimeInt(int *, int);

void imprimeLibro(Libro *, int);

int main(int argc, char const *argv[])
{
    int * numeros = (int *) malloc(N * sizeof(int));
    
    int * sup = numeros;
    int * end = numeros + N;

    for (; sup < end; ++sup){
        *sup = rand() % 100;
    }
    
    printf("\n\nComenzando con los enteros\n\n");

    imprimeInt(numeros, N);

    

    Libro * tomo = (Libro *)malloc(sizeof(Libro) * N);

    Libro * fin = tomo + N;

    for (Libro * aux = tomo; aux < fin; ++aux)
    {
        aux->titulo = (char *)malloc(sizeof(char) * 20);
        printf("\nNombre del libro: ");
        scanf("%s", aux->titulo);

        printf("Número de páginas: ");
        scanf("%d", &aux->paginas);
    }
    
    imprimeLibro(tomo, N);

    free(tomo);
    free(numeros);

    return 0;
}

void imprimeInt(int * numeros, int cont){
    int * sup = numeros;
    int * fin = numeros + cont;

    for (; sup < fin; ++sup)
    {
        printf(" %d ", *sup);
    }
    
    printf("\n");
}

void imprimeLibro(Libro * tomo, int contLibros){
     Libro * sup = tomo;
     Libro * fin = sup + contLibros;

    printf("\n\tTítulo \t\t No. de páginas");

     for (; sup < fin; ++sup){
         printf("\n\t%s \t\t %d", sup->titulo, sup->paginas);
     }
     
    printf("\n");
}