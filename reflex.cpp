#include<iostream>
#include"cronometro.h"

using namespace std;


void delay(int secs) {
for(int i = (time(NULL) + secs); time(NULL) != i; time(NULL));
}



int main(){

cronometro crono;

int espacio=0;

cout << "Pulse una espacio" << endl;
cin >> espacio;

cout << "Espacio: " << espacio << endl;

return 0;
}


