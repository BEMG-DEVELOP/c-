/*
    Espacios de nombres.
    
    Nos ayuda a evitar problemas con los identificadores,
    nos permiten que existan variables o dunciones con el mismo nombre.

    En este ejercicio creamos tres namespace, de manera de cascada y declaramos la variable x
    en pocas palabras cada variable x es diferente, pero para poder acceder a la variable x
    debemos usar un especificador de ambito (::).

    Como vemos en la funcion main declaramos x sola, por que en el tercer using lo declaramos,
    ya en la linea 32 accedemos a la variable del namespace dos y asignamos el valor 30,
    en la linea 33 accedemos a la variable del namespace tres y asignamos el valor 50.

    Por ultimo colocamos como vamos a mostrar la informacion cuando vayamos a compilar el programa y 
    cuando lo ejecutemos debe salir 10, 30, 50.
*/
#include <iostream>

namespace uno{
    int x;
    namespace dos{
        int x;
        namespace tres{
            int x;
        }
    }
}
using std::cout;
using std::endl;
using uno::x;

int main(){
    x = 10;  
    uno::dos::x = 30;
    uno::dos::tres::x = 50;
    cout << x <<", " << uno::dos::x << ", " << uno::dos::tres::x << endl;
    return 0;

}