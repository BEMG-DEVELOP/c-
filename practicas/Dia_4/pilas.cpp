#include <iostream>

using namespace std;

void main()
{
    const int TPILA = 5; 

    class PILA
    {
        public:
            int mipila[TPILA];
            int apilados;
            void reset();
            void push(int v);
            int pop();
    };

    void PILA::reset()
    {
        apilados = 0;
    }
    void PILA::push(int v)
    {
        if (apilados<TPILA)
        {   
            mipila[apilados++] = v;
        }
    }
    int PILA::pop()
    {
        if (apilados>0)
        {
            cout << "El valor del tope eliminado era: ";
            return(mipila[--apilados]);
        }
        else
        
            cout << "No existen datos para eliminar. ERROR: ";
            return(0);
        
    }
}