#include "iostream"
using namespace std;

int main ()
{
    int n1, n2;

    cout << endl;

    cout << "Ingrese el dividendo: ";
    cin >> n1;
    cout << "Ingrese el divisor: ";
    cin >> n2;
    if (n1%n2==0)
    {
        cout << n1 << " es divisible entre " << n2 << endl;
    }
    else 
    {
        cout << n1 << " no es divisible entre " << n2 << endl;
    }
    cout << endl;
}