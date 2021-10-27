/*
    Este es otro ejemplo creando varios namespace
    Pero no imprime el texto, aun tengo que investigar como mostrarlo en pantalla
    por que solo muestra  una sola letra.
*/
#include <iostream>
namespace Nombre{
    unsigned char nombre;
    namespace Apellido1{
        unsigned char nombre;
        namespace Apellido2{
            unsigned char nombre;
        }
    }
}

using std::cout;
using std::endl;
using Nombre::nombre;

int main(){
    nombre = 'Brian E.';
    Nombre::Apellido1::nombre = 'Martinez';
    Nombre::Apellido1::Apellido2::nombre = 'Garcia';
    cout << nombre <<", " << Nombre::Apellido1::nombre << ", " 
    << Nombre::Apellido1::Apellido2::nombre << endl;
    return 0;
}