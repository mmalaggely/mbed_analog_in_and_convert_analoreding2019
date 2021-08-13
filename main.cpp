#include "mbed.h"

Serial pc(USBTX,USBRX);

AnalogIn ain(A0); 
int main() {
    while(1) { 
  wait(10);
 float f=ain.read();
 pc.printf("value is: %d  \n",f); 
  }
}