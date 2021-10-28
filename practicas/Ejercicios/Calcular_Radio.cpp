/*
    Ejercicios

    Van a ser dos ejercicios con problemas diferentes.

    1. Calcular longitud y área de la circunferencia y el volumen de la esfera.
    
*/
#include <iostream>
#include <iomanip>
#include <cmath> //libreria numerica 

using namespace std;

int main()
{
    const float PI = 3.1416; //Declaramos PI con algunos decimales
    float radio; //Declaramos la variable radio que tendra el numero que dijitemos

    cout << "Introduce el valor del radio: ";
    cin >> radio;   //Introducimos el valor
    
    cout << "\n Longitud de la circunferencia: " << setprecision(2) << 2*PI*radio;
    cout <<"\n Arera del circulo: " << PI*pow(radio, 2);
    cout << "\n Volumen de la esfera: "<< (4.0/3)*PI*pow(radio,3)<<endl;
    system("pause");
}
