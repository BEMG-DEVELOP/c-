/*
    Manejo de Memoria Dinamica

    Es un espacio de almacenamiento que se solicita en tiempo de ejecucion, se conoce como
    alamcenaminto libre, ademas de solicitar, tambien podemos liberar el espacio cuando 
    dejemos de necesitarlo.

    Para realizar esta administracion de la memoria dinamica, c++ cuenta con dos operadores
    para la gestion de memoria: NEW & DELETE que forman parte del lenguaje y no de una libreria.

    El operador NEW reserba memoria dinamica, su proposito es crear arrays cuyo tamaño pueda ser
    determinada mientras el programa corre. 

    El operador DELETE se usa para liberar bloques de memoria dinamica reservada con new.
*/
#include <iostream>

using namespace std;

int main()
{
    int * xp;
    double * dp;
    int * arr_dynamic;
    int ** matriz;

    struct Punto3d
    {
        float x, y, z;
    } * punto;
    
    int n,m;

    cout << "Pasame un entero y un doble" << endl;

    xp = new int;
    dp = new double;

    cin>> *xp >> *dp;

    cout << "dame n y m " << endl;
    
    cin >> n >> m;

    arr_dynamic = new int[n];
    
    matriz = new int* [n];

    for (int i = 0; i < n;i++)
        matriz[i] = new int[m];
    srand(m);

    for (int i = 0; i < n; i++)
        arr_dynamic[i] = rand()%10;
        
    for (int i = 0; i < n; i++)
        for (int j; j < m; j++)
            matriz[i][j] = rand()%10;
    cout << endl;

    for (int i; i < n; i++)
        cout << arr_dynamic[i] << " ";
    cout << endl;
    cout << endl;

    for (int i; i < n; i++)
    {
        for (int j=0; j < m; j++)
            cout<< matriz[i][j] << " " << endl;
    }
    punto = new Punto3d;

    punto-> x = 3;
    punto-> y = 3;
    punto-> z = 10;

    cout<<punto->x << " " << punto->y << " " << punto->z << endl;

    delete xp;
    delete dp;
    delete [] arr_dynamic;

    for (int i =0; i < n; i++)
        delete [] matriz[i];
    
    delete punto;
    
    return 0;            
}