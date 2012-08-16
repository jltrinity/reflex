#include<iostream>
#include<stdio.h>
#include"cronometro.h"

using namespace std;


void delay(int secs) {
for(int i = (time(NULL) + secs); time(NULL) != i; time(NULL));
}



int main(){

cronometro crono;

return 0;
}


