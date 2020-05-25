#include "iostream"
using namespace std;

int main()
{
    int numero;
    
    cout << endl;

    cout << "Ingrese el numero a evaluar: ";
    cin >> numero;

    if (numero%2==0)
    {
        cout << numero << " es par" << endl;
    }
    else
    {
        cout << numero << " es impar" << endl;
    }
    cout << endl;
}