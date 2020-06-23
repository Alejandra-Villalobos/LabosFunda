#include "iostream"
using namespace std;

double * A1 (double n, double a1[])
{
  for (int i=1; i<=n; i++)
  {
    cout << endl << "Ingrese el elemento " << i << " del primer arreglo: ";
    cin >> a1[i];
  }
  return a1;
}
double * A2 (double n, double a2[])
{
    for (int i=1; i<=n; i++)
  {
    cout << endl << "Ingrese el elemento " << i << " del segundo arreglo: ";
    cin >> a2[i];
  }
  return a2;
}
int main()
{
  int n;
  cout << "Ingrese la cantidad de elementos de los arreglos: ";
  cin >> n;
  double a1[n], a2[n], a3[n];

  a1==A1(n,a1);
  a2==A2(n,a2);
  cout << "Arreglo 3:  ";
  for (int i=1; i<=n; i++)
  {
    a3[i] = a1[i] + a2[i];
    cout << a3[i] << "\t";
  }
}