/*
    El siguiente programa declara un array de 7 elementos de tipo double llamado notas
    y le asigna valores iniciales. A continuación recorre el array, utilizando la 
    instrucción for, para mostrar por pantalla el contenido del array.
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int i;
    double notas[7]= {2.3,8.5,3.2,9.5,4.5,7.0};
    cout << fixed << setprecision(2);
    for ( i = 0; i < 7; i++)
    {   
        cout << notas[i] << " ";
    }
    cout << endl;
    system("pause");
    return 0; 
}