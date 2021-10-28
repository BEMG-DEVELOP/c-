#include <iostream>

using namespace std;

int main()
{
    int anio;

    cout << "Introduce año:";
    cin >> anio;

    if (anio%4 == 0 and anio%100 != 0 or anio%400 ==0)//condicion de bisisestro
    {
        cout << "Bisiesto"<< endl;
    }else
    {
        cout << "No es Bisiesto"<< endl;
    }
    
    return 0;
}