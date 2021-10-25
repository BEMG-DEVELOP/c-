/*
    Bloque de sentencias

    Las sentencias especifican  y controlan el flujo de ejecucion del programa.
    el concepto de Bloque de sentencia se utiliza para agrupar un conjunto de sentencias
    dentro de un ambito concreto del programa.

    En este ejemplo ocupamos las sentencias do while, if, for.
*/
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int numero,contador,sumador;
    sumador = contador = 0;

    do{
        cout << "Introduzca un numero mayor que 0 y menor que 500 :";
        cin >> numero;
    }while(numero < 0 || numero > 500);
    //La condicion controla el intervalo establecido.

    //Controla que no entre numeros con diferencia inferior a ocho hasta 500 y no superior.
    if ( numero<=492 )
    {
        for ( numero; numero < 500; numero += 8 )
        {
            sumador = sumador + numero;
            contador = contador +1;
            cout << numero << ",";
        }
    }
    cout << "\n Estas es la suma: " << sumador << endl;
    cout << "El numero total hasta 500 separado ocho posiciones es :" << 
        contador << endl;
    system( "PAUSE" );
    return 0;
}