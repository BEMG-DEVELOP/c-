#include <iostream>
using namespace std;

int main()
{
    int n, i;
    long double factorial;
    cout << "Introduzca un numero";
        cin >> n;
    
    factorial = 1;
    
    for (i = 1; i < n; i++)
        factorial = factorial * i;
    cout << endl << "factorial de "<< n << "->"<< factorial << endl;
    system("pause");
    return 0;
}