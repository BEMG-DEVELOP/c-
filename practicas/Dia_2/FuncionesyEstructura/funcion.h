/*
    Funciones

    En este archivo se muestran los tipos de funciones  que hay en c++.
    Las funciones tiene  como objetivo de organizar, tener un mayor orden de codigo,
    y para reutilizar codigo, logrando llamar  a la funcion desde distintos 
    partes las del programa.

    La funcion siempre retorna algo, por lo tanto es obligatorio declarar el tipo,
    despues nombrar a la funcion, despues dentro de los parentesis podemos 
    poner argumentos o parametros.
    Despues  entre las llaves  va toda la funcionalidad y por ultimo retorno el valor.

    Hay algunos detalles respecto a los argumentos de una función, veamos:

        ->Una función o procedimiento pueden tener una cantidad cualquier de parámetros, es decir pueden tener 
        cero, uno, tres, diez, cien o más parámetros. Aunque habitualmente no suelen tener más de 4 o 5.
    
        ->Si una función tiene más de un parámetro cada uno de ellos debe ir separado por una coma.
    
        ->Los argumentos de una función también tienen un tipo y un nombre que los identifica. 
        El tipo del argumento puede ser cualquiera y no tiene relación con el tipo de la función.

    Debes tener en cuenta dos cosas importantes con la sentencia return:

        ->Cualquier instrucción que se encuentre después de la ejecución de return NO será ejecutada.
         Es común encontrar funciones con múltiples sentencias return al interior de condicionales,
         pero una vez que el código ejecuta una sentencia return lo que haya de allí hacia abajo 
         no se ejecutará.

        ->El tipo del valor que se retorna en una función debe coincidir con el del tipo declarado 
            a la función, es decir si se declara int, el valor retornado debe ser un número entero.
 */

#include <iostream>
using  namespace std;
    
    int entero(){

        int suma = 5+5; 
        return suma; //El codigo que esta despues de este retun, nunca se ejecutara
        //return 5+5;
        //int x = 10;
    }
    char escritura( int n ){

        if ( n == 0 )
        {
            return 'a';
        }
        return 'x';
    }
    bool funcionBool(int n, string mensaje){
        if ( n == 0 )
        {
            cout << mensaje;
            return 1;
            return true;
        }
        return 0;
        return false;
    }

    /*
        Procedimiento
    Ah diferencia que las funciones, el procedimiento no retorna un valor, solo usa el tipo void
    */
   void procedimento(int n, string nombre){
       if ( n == 0 ){}
       {
           cout << "Hola" << nombre;
           return;
       }
       cout << "adios" << nombre;
   }
