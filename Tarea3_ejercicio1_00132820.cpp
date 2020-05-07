#include "iostream"
using namespace std;

int main()
{
    int numero1;
    int numero2;
    int numero3;
    
    cout << "Ingrese 3 numeros enteros:" << endl;
    cin >> numero1 >> numero2 >> numero3;
    
    int promedio = (numero1+numero2+numero3)/3;

    cout << "El promedio de " << numero1 << ", " << numero2 << " y " << numero3 << " es: " << promedio;
}