#include <Arduino.h> // Inclui a biblioteca do framework do Arduino

int LED = 18; // Define a porta 18 do esp para ligar o LED.

// Função para configuração do esp32
void setup(){
  pinMode(LED, OUTPUT); // Configura a porta como saída
}

// Função do loop principal
void loop(){
digitalWrite(LED, HIGH); // Liga o LED
delay(1000);  // Espera 1 segundo
digitalWrite(LED, LOW); // Desliga o LED
delay(1000); //Espera 1 segundo
}