#include<Servo.h>//Libreria para manejo de los servos

#define PINSERVODERECHO 12//Defino el pin del servo derecho

Servo motorDerecho;


void setup() {
  motorDerecho.attach(PINSERVODERECHO);
  Serial.begin(9600);
}

char orden;

void loop() {
  if(Serial.available()>0)
    {
        orden=Serial.read();
    }
  if(orden=='w')
    {
      motorDerecho.write(0);//Sentido horario
      delay(1000);
      motorDerecho.write(90);//Detenido
      delay(1000);
      motorDerecho.write(180);//Sentido antihorario
      delay(1000);
      motorDerecho.write(90);//Detenido
      delay(1000);    
    }else{
          motorDerecho.write(90);//Detenido
         }  
  
  
}
