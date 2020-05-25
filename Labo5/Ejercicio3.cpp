#include "iostream"
using namespace std;

int main()
{
    float numero;
    
    cout << endl;

    cout << "Ingrese el numero a evaluar: ";
    cin >> numero;

    if (numero>0)
    {
        cout << numero << " es positivo" << endl;
    }
    else if (numero<0)
    {
        cout << numero << " es negativo" << endl;
    }
    else
    {
        cout << numero << " es cero" << endl;
    }
    cout << endl;
}