#include<Servo.h>//Libreria para manejo de los servos

#define PINSERVODERECHO 12//Defino el pin del servo derecho

Servo motorDerecho;


void setup() {
  motorDerecho.attach(PINSERVODERECHO);
}

void loop() {
  motorDerecho.write(0);//Sentido horario
  delay(1000);
  motorDerecho.write(90);//Detenido
  delay(1000);
  motorDerecho.write(180);//Sentido antihorario
  delay(1000);
  motorDerecho.write(90);//Detenido
  delay(1000);
  
}
