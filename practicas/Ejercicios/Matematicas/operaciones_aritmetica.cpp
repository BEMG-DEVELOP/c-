/*
    Ejercicio 2

    Programa que lee dos numeros de tipo float y muestra la suma,resta,y multiplicacion.
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    float n1, n2; //Variables las cuales tendran la cantidad se escriban.
    float suma, resta, mult, divi; // Variables de las operaciones aritméticas.

    cout<<"Introduzca dos numero";
    cin>>n1>>n2;
    suma = n1+n2;
    resta = n1-n2;
    mult = n1*n2;
    divi = n1/n2;
    cout <<fixed << setprecision(2);
    cout <<"\n suma:"<< fixed << setprecision(2) <<suma;
    cout <<"\n resta: " << resta;
    cout <<"\n multiplicacion:"<< mult;
    cout <<"\n division:" << divi;
    system("pause");
}