/*
    Apuntadores

    Los apuntadores son variables que guardar direcciones en memoria c++,
    tambien son utilies  para pasarle parametros a las funciones de tal forma que 
    les permiten modificar y regresar valores a la rutina que llama.

    Los punteros  son un recurso que de cierta forma  se puede considerar de muy bajo nivel
    ya que permiten manipular directamente contenidos de memoria.

    Por lo tanto puede presentar algunos problemas y exigen que se preste una especial atencion
    a aquellas secciones del código  que los utilizan, los errores más insidiosos y dificiles de
    depurar que se presenta en los programas C++, esta relacionado con el uso descuidado 
    de punteros.

    El siguiente ejemplo utiliza arreglos u apuntadores y permite encontrar el elementos mas pequeño
    del arreglo que se le pase.

    Por lo que yo entendi este programa te va a traer el elemento más chico,pero no se si el elemento pequeño del
    arreglo o el numero más pequeño que escribamos o tambien no se si cometi algun error, por que solo detecta 
    el numero de la primera posicion del arreglo.
*/
#include <iostream>

using namespace std;

int main() {
    
    int table[10], minimo (int *a, int n);

    cout << "Introduzca 10 enteros: \n";
    for (int i = 0; i<10;i++)
    cin>>table[i];
    cout<<"\n el valor minimo es"
    << minimo(table,10)<<endl;
    
}

int minimo(int *a, int n) {
    
    int menor;
    menor = *a;

    for (int i = 0;i<n;i++)    
      if(*(a+0)<menor)
      menor=*(a+0);
        return menor;
}
