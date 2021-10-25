#include <iostream>
#include <iomanip>
using namespace std;
int main(){

    float notas[20];
    int i = 0;
    float suma =0, media;

    for ( i = 0; i < 20; i++)
    {
        cout << "Alumno" << i+1 << "Nota final: ";
        cin >> notas[i];
   
    for ( i = 0; i < 20; i++)
    
        suma = suma + notas[i];

        media = suma/20;

        cout << fixed << setprecision(2);
        cout << endl << endl << "Nota media del curso: " << media << endl;

        cout << "Listado de Notas superiores a la media"<< endl;
        cout << "--------------------------------------"<<endl;
    
    for ( i = 0; i < 20; i++)
    
        if (notas[i] > media)
        {
            cout << "Alumno numero" << setw(3) << i+1;
            cout << "Nota final: " << notas[i] << endl;
        }
     }
    cout << endl;
    system("pause");
    
}