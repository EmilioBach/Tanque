#include <Tanque.h>

Tanque tank; //instancia a la clase

void setup() {
  tank.chazis(10,11,12,13);
  tank.torreta(9,8,7,6,5,4);
  //indicar pines

}

void loop() {
  tank.avanza(); //el tanque avanza
  delay(2000);
  tank.izquierda(); //el tanque gira a la izquierda
  delay(1000);
  tank.derecha(); //el tanque gira a la derecha
  delay(1000);
  tank.retrocede(); //el tanque retrocede
  delay(2000);
  tank.detener(); //el tanque se detiene
  delay(3000);

}.
