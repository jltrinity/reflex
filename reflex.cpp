#include<iostream>
#include"cronometro.h"

using namespace std;


void delay(int secs) {
for(int i = (time(NULL) + secs); time(NULL) != i; time(NULL));
}



int main(){

cronometro crono;

crono.activar();
cout << "Hello" << endl;
for(int i=0;i<100000000;i++){}
crono.parar();


cout << "Tiempo total: " << (double)crono.tiempo() << endl;

return 0;
}


