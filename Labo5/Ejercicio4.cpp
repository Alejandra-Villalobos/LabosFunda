#include "iostream"
#include "string"
using namespace std;

int main()
{
    string palabra;

    cout << endl;

    cout << "Ingrese una palabra: ";
    cin >> palabra;

    if(palabra.length()>10)
    {
        cout << palabra << " tiene mas de 10 caracteres ";
        if (palabra.length()%2==0)
        {
            cout << "y su longitud es par";
        }
        else
        {
            cout << "y su longitud es impar" << endl;
        }
        cout << endl;
    }
    else
    {
        cout << palabra << " tiene 10 caracteres o menos ";
        if (palabra.length()%2==0)
        {
            cout << "y su longitud es par";
        }
        else
        {
            cout << "y su longitud es impar" << endl;
        }
        cout << endl;
    }
    cout << endl;
}