#include <iostream>
using namespace std;

int main(){
    float notapractica, notateorica, notaparticipacion;
    int notafinal;

    cout << "Ingrese la nota practica: ";
    cin>>notapractica;
    cout << "Ingrese la nota teorica: ";
    cin>>notateorica;
    cout << "Ingrese la nota participacion: ";
    cin >> notaparticipacion;

    notapractica = notapractica * 0.30;
    notateorica = notateorica * 0.60;
    notaparticipacion = notaparticipacion * 0.10;
    notafinal = notaparticipacion + notateorica + notapractica;

    cout << "La nota final es " << notafinal << endl;
    return 0;

}