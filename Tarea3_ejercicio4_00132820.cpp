#include "iostream"
using namespace std;

int main()
{
    string producto;
    float precio;
    int cantidad;

    cout << "Ingrese el nombre del producto comprado:" << endl; 
    cin >> producto;

    cout << "Ingrese precio del producto:" << endl;
    cout << "$";
    cin >> precio;

    cout << "Ingrese la cantidad que compro:" << endl;
    cin >> cantidad;

    float total = precio*cantidad;

    cout << "Producto: " << producto << endl << "Cantidad: " << cantidad << endl << "Total: $" << total; 

}