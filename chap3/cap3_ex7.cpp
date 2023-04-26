/*
Escreva uma função para receber por parâmetro o tempo de duração de um experimento expresso em segundos e imprimir esse mesmo tempo em horas, minutos e segundos.
*/

#include <iostream>
#include <iomanip>
using namespace std;

void duration(int sec)
{
    int hours, minutes, seconds;
    hours = sec / 3600;
    minutes = (sec % 3600) / 60;
    seconds = (sec % 3600) % 60;
    cout << setfill('0');
    cout << setw(2) << hours << ":";
    cout << setw(2) << minutes << ":";
    cout << setw(2) << seconds << endl;        
}

int main()
{
    duration(10925); // Test Input: 10925 sec. Expected output: 03:02:03
    return 0;
}
