#include <iostream>
#include <unistd.h>

using namespace std;

int tempo(int time,int segundo,int minuto,int hora){
    time = time + 1;
    usleep(10000);

    if(time > 99){
        segundo = segundo + 1;
        time = 1;
    } if(segundo > 59){
        minuto = minuto + 1;
        segundo = 0;
    } if(minuto > 59){
        hora = hora + 1;
        minuto = 0;
    }

    system("clear");

    cout << " " << hora << ":" << minuto << ":" << segundo << ":" << time << "\n\n";

    tempo(time, segundo, minuto, hora);
    return 0;
}

int main(){
    int time = 0;
    int segundo = 0;
    int minuto = 0;
    int hora = 0;

    tempo(time, segundo, minuto, hora);
    cin >> time;
    return 0;
}