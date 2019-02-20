#include<Servo.h>//Libreria para manejo de los servos
#include<SoftwareSerial.h>
#define PINSERVODERECHO 12//Defino el pin del servo derecho
#define TXBluetooth 3 //Lugar de conexion d e l Blue tooth Rx
#define RXBluetooth 2 //Lugar de conexion d e l Blue tooth Tx


Servo motorDerecho;
SoftwareSerial BT(RXBluetooth,TXBluetooth);

void setup() {
  motorDerecho.attach(PINSERVODERECHO);
  Serial.begin(9600);
  BT.begin(9600);
}

char orden;

void loop() {
  if(Serial.available()>0)
    {
        orden=Serial.read();
    }
  if(BT.available()>0)
    {
        orden=BT.read();
        Serial.println(orden);  
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
