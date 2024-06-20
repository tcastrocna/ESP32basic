#include <Arduino.h>
#include <IRremote.hpp>
 
int IR_RECV_PIN = 16; //Define o pino do IR
  
void setup(){
  Serial.begin(9600);
  IrReceiver.begin(IR_RECV_PIN, ENABLE_LED_FEEDBACK);
}
 
void loop()
{
  if (IrReceiver.decode()){
  Serial.println(IrReceiver.decodedIRData.decodedRawData, HEX); //Imprime o códio Hexadecimal.
  IrReceiver.resume();
}
}
