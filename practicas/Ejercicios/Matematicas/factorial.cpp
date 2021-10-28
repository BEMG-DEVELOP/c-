/*
    El objetivo de este ejercicio es calcular el factorial de un numero.
    
    Pero ejecutando el programa, el resultado no es el correcto, devuelve
    el resultado  de un numero anterior.
*/
#include <iostream>
using namespace std;

int main()
{
    int n, i;
    long double factorial;
    cout << "Introduzca un numero";
        cin >> n;
    
    factorial = 1;
    
    for (i = 1; i < n; i++)
        factorial = i * factorial;
    cout << endl << "factorial de "<< n << "->"<< factorial << endl;
    system("pause");
    
}