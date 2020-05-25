#include "iostream"
#include "string"
using namespace std;

int main ()
{
    string palabra;

    cout << endl;

    cout << "Ingrese una palabra en minusculas: ";
    cin >> palabra;

    if (*palabra.begin() == palabra.back())
    {
        cout << palabra << " inicia y termina con la misma letra" << endl;
    }
    else
    {
        cout << palabra << " no inicia y termina con la misma letra" << endl;
    }
    cout << endl;
}