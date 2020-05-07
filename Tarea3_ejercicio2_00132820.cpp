#include "iostream"
using namespace std;

int main()
{
    float radio;

    cout << "Ingrese el radio del circulo:" << endl;
    cin >> radio;

    float perimetro = 2*3.14159265359*radio;
    float area = 3.14159265359*(radio*radio);

    cout << "El perimetro del circulo es: " << perimetro << endl;
    cout << "El area del circulo es: " << area;
}