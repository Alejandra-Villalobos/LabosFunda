#include "iostream"
using namespace std;

bool A_bisiesto (int a) // Función para comprobar si el año es bisiesto o no
{
    if ((a%400==0)||(a%4==0 && a%100!=0)) // Si es divisible entre 400 o divisible entre 4 pero no entre 100
    {
        return true;
    }
    else
        return false;
}

int main ()
{
    int a;
    cout << "Ingrese el año a comprobar ";
    cin >> a;

    if (A_bisiesto(a)==true)
        cout << a << " es bisiesto " << endl;
    else if (A_bisiesto(a)==false)
        cout << a << " no es bisiesto " << endl;

}