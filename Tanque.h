/*Echo por Emilio y Manuel
 * licencia Gratis
 * fecha 3/9/2022
 */

#include "Arduino.h"

#ifndef Tanque_h
#define Tanque_h

class Tanque{
  public:
    Tanque(int m1p, int m1n, int m2p, int m2n); //definimos pines para motores M = motor 1 = Motor 1 P o N = positivo o negativo
    void adelante();
    void atras();
    void der();
    void izq();
    void detener();
   private:
    int _m1p, _m1n, _m2p, _m2n;
}; //no olvidar

#endif
