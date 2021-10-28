/*
    Estructura de Datos.

    Nos permite organizar un conjunto de datos para manipularlos de la maner mas conveniente.


*/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

struct lista_elementos
{
    char elem[4096];
    struct lista_elementos *sig;
};
typedef struct lista_elementos nodo;

int menu(void);
void crear(nodo *pt);
nodo *insertar(nodo *pt);
nodo *eliminar(nodo *pt);
void mostrar(nodo *pt);

void main()
{
    nodo *prin;
    int eleccion;
    do
    {
        eleccion = menu();
        switch (eleccion)
        {
            case 1:
                prin = (nodo *)malloc(sizeof(nodo));
                crear(prin);
                printf("\n");
                mostrar(prin);
                continue;
            case 2:
                prin = insertar(prin);
                printf("\n");
                mostrar(prin);
                continue;
            case 3:
                prin = eliminar(prin);
                printf("\n");
                mostrar(prin);
                continue;
            default:
                printf("Fin de las operaciones");
        }
    } while (eleccion != 4);
}