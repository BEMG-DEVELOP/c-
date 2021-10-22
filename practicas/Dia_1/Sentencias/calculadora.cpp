/*
 En este ejercicio vamos a hacer una calculadora de operaciones basicas, mediante switch.
*/
#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
    
    int a ,b;
    char oper;

    cout << "Introduzca la operacion a realizar usando especios:\n\n";
    cin >> a >> oper >> b;

    switch (oper) {
        case '+': cout << a << oper << b << " = " << a + b << endl;
        break;
        case '-': cout << a << oper << b << "=" << a - b << endl;
        break;
        case '*': cout << a << oper << b << " = " << a * b << endl;
        break;
        case '/': cout << a << oper << b << " = " << a / b << endl;
        break;
        case '%': cout << a << oper << b << " = " << a % b << endl;
        break;

        default: break;
    }
    return 0;
}