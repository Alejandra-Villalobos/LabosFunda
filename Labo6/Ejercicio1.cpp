#include "iostream"
using namespace std;

int mcd(int a, int b, int res) //Funcion para calcular MCD (Método de Euclides)
{
    do
    {
        res = a%b;
        if (res != 0)
        {
            a=b;
            b=res;
        }
    } 
    while (res != 0);
    return b;
}
int main ()
{
    int a, b, res;
    
    cout << endl << "Ingrese el numero mayor: ";
    cin >> a;
    cout << "Ingrese el numero menor: ";
    cin >> b;

    if ((a<0)||(b<0)) //a y b tienen que ser positivos
        cout << "Ingrese solo numeros positivos" << endl;
    else if (a<b) //a no puede ser menor que b
        cout << "Ingrese los numero al reves" << endl;
    else if ((a != 0) && (b == 0)) //Si b es 0 entonces el MCD es a
        cout << "El MCD de " << a << " y " << b << " es: " << a << endl;
    else
        cout << "El MCD de " << a << " y " << b << " es: " << mcd(a,b,res) << endl;
    cout << endl;
}