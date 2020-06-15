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

int main()
{
    int d, m, a;
    cout << "Ingrese la fecha en numeros (dd mm aa)" << endl;
    cout << "Dia: ";
    cin >> d;
    cout << "Mes: ";
    cin >> m;
    cout << "Año: ";
    cin >> a;

    if ((d<1||d>31)||(m<1||m>12)||(a<0)) //dia, mes o año fuera de rangp
        cout << "Fecha no valida";
    else if ((d==31)&&(m==4||m==6||m==9||m==11)) //dia 31 y mes con 30 días
        cout << "Error. El mes " << m << " solo tiene 30 dias";
    else if ((d==30||d==31)&&(m==2)) //dia 30 o 31 y mes 2
        cout << "Error. El mes " << m << " tiene un maximo de 29 dias";
    else if ((d==29)&&(m=2)&&(A_bisiesto(a)==false)) //dia 29, mes 2 y año no bisiesto
        cout << "Error. El año " << a << " no es bisiesto";
    else if (((d==30)&&(m==4||m==6||m==9||m==11))||((d==31)&&(m==1||m==3||m==5||m==7||m==8||m==10))||((d==29)&&(m=2)&&(A_bisiesto(a)==true))||((d==28)&&(m=2)&&(A_bisiesto(a)==false))) //cambio de mes (30 días, 31 días, año bisiesto y año no bisiesto)
        cout << "El dia siguiente es 1/" << m+1 << "/" << a;
    else if ((d==31)&&(m=12)) //cambio de año
        cout << "El dia siguiente es 1/1/" << a+1;
    else if ((d==28)&&(m=2&&A_bisiesto(a)==true))//dia 28 y año bisiesto
        cout << "El dia siguiente es 29/2/" << a;
    else //otro
    cout << "El dia siguiente es " << d+1 << "/" << m << "/" << a;

}