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
    seleccion_u * opc = (seleccion_u * ) malloc(sizeof(seleccion_u) * 5);

    int * numeros = (int *) malloc(N * sizeof(int));
    
    int * sup = numeros;
    int * end = numeros + N;

    for (; sup < end; ++sup){
        *sup = rand() % 100;
    }
    
    printf("\n\nComenzando con los enteros\n\n");

    imprimeInt(numeros, N);

    

    Libro * tomo = (Libro *)malloc(sizeof(Libro) * 5);

    Libro * fin = tomo + 5;

    for (Libro * aux = tomo; aux < fin; ++aux)
    {
        Libro * datosLibro = (Libro *)malloc(sizeof(Libro));
        
        datosLibro->titulo = (char *)malloc(sizeof(char) * 20);
        printf("Nombre del libro:");
        scanf("%s", datosLibro->titulo);

        printf("Número de páginas: ");
        scanf("%d", &datosLibro->paginas);
    }
    
    imprimeLibro(tomo, N);

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
         printf("\t%s \t\t %d", sup->titulo, sup->paginas);
     }
     
    printf("\n");
}