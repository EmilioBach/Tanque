/*Echo por Emilio y Manuel
 * licencia Gratis
 * fecha 3/9/2022
 */

#include "Tanque.h"
#include "Arduino.h"


void Tanque::motorConfig(int m1p, int m1n, int m2p, int m2n){
  serial.begin(9600);
  _m1p = m1p;
  _m1n = m1n;
  _m2p = m2p;
  _m2n = m2n;
  //motor 1
  pinMode (_m1p, OUTPUT);
  pinMode (_m1n, OUTPUT);
  //motor 2
  pinMode (_m2p, OUTPUT);
  pinMode (_m2n, OUTPUT);

  Serial.println("--------------------------------------------------------------------------------------------------");
  Serial.println("Los pines a utilizar son: ");
  Serial.print("Motor 1 positivo: "); Serial.print(m1p); Serial.print("|"); Serial.print("Motor 1 negativo"); Serial.print(m1n); 
  Serial.print("Motor 2 positivo: "); Serial.print(m2p); Serial.print("|"); Serial.print("Motor 2 negativo"); Serial.print(m2n);
  Serial.println("--------------------------------------------------------------------------------------------------");
}

void Tanque::adelante(){
  digitalWrite (_m1p, LOW);
  digitalWrite (_m1n, HIGH);
  digitalWrite (_m2p, LOW);
  digitalWrite (_m2n, HIGH);
}

void Tanque::atras(){
  digitalWrite (_m1p, HIGH);
  digitalWrite (_m1n, LOW);
  digitalWrite (_m2p, HIGH);
  digitalWrite (_m2n, LOW);
}

void Tanque::der(){
  digitalWrite (_m1p, LOW);
  digitalWrite (_m1n, HIGH);
  digitalWrite (_m2p, HIGH);
  digitalWrite (_m2n, LOW);
}

void Tanque::izq(){
  digitalWrite (_m1p, HIGH);
  digitalWrite (_m1n, LOW);
  digitalWrite (_m2p, LOW);
  digitalWrite (_m2n, HIGH;
}

void Tanque::detener(){
  digitalWrite (_m1p, LOW);
  digitalWrite (_m1n, LOW);
  digitalWrite (_m2p, LOW);
  digitalWrite (_m2n, LOW);
}
