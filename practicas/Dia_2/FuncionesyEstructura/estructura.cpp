/*
    Estructuras

    Una estructura es un grupo de variables, relacionadas de manera logica, las cuales
    pueden ser de diferentes tipos de datos.

    Se forma una estructura utilizando la palabra reservas struct, seguida del campo
    etiqueta opcional.

    Por ejemplo los arreglos  nos permiten construir estructuras mas complejas.

    Arreglo es una coleccion ordenada de elementos del mismo tipo.    
    
    Los elementos de un array se pueden utilizar igual que cualquier otra variable y
    se puede hacer con ellos las mismas operaciones que se pueden hacer con el resto de variables.
*/

#include <iostream>

using namespace std;

int main(){

    int n, m = 5;
    int a[] = {2,8,3,0,4}; //Se declara un arreglo de 5 elementos.

    n = a[0];
    a[0] = a[1] + a[2];
    a[1]++;
    a[n] = m+10;
    a[n+1] = 7;
    if ( a[0] >= a[1] )
    {
        a[4] = a[0];
    }
    cout << a[0] << " " << a[1] << " " << a[2] << " " << a[3] << " " << a[4];
    cout << endl;
    system("PAUSE");
    
    return 0;
}