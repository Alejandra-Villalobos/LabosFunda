#include "iostream"
#include "time.h"
using namespace std;

int main()
{
    time_t actual = time(0);
    tm * time = localtime(&actual);
    time->tm_hour  << time->tm_min << time->tm_sec;

    cout << "Hora actual: " << time->tm_hour << ":" << time->tm_min << ":" << time->tm_sec << endl;

    if (time->tm_sec==59)
        cout << "Hora 1 segundo despues" << time->tm_hour << ":" << time->tm_min+1 << ":0"<< endl;
    else if ((time->tm_min==59)&&(time->tm_sec==59))
        cout << "Hora 1 segundo despues" << time->tm_hour+1 << "0:0"<< endl;
    else 
        cout << "Hora actual: " << time->tm_hour << ":" << time->tm_min << ":" << time->tm_sec+1 << endl;

}