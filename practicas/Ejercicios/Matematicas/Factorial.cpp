#include <iostream>

using namespace std;

int main(){
    int numero, factorial = 1;

    cout << "DIgite un numero: "; cin>>numero;
    for(int i =1;i<=numero;i++){
        factorial = factorial * i;
    }
    cout << "El Factorial del numero es: "<<factorial << endl;
    system("pause");
    return 0;
}