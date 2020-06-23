#include "iostream"
using namespace std;

int main()
{
    int numeros[100], n=1, i=0;
    while (i<=99)
    {
        numeros[i] = n;
        n +=2; 
        ++i;
    }
    for (i=99; i>=0; i--)
        cout << endl << numeros[i];
}