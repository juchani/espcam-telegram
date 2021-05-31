#include <Wire.h>
#include <ACROBOTIC_SSD1306.h>
#define bzz 2
#define rl 1

int option;
int led = 6;

void setup(){
  Serial.begin(9600);//velocidad estandar 9600
  pinMode(led, OUTPUT); 
  pinMode(bzz, OUTPUT);
  pinMode(rl,OUTPUT);
  Wire.begin();  
  oled.init();  
}

void loop(){
  //si existe datos disponibles los leemos
  if (Serial.available()>0){
    //leemos la opcion enviada
    option=Serial.read();
    if(option=='a') {
      digitalWrite(led, LOW);
      Serial.println("OFF");
      digitalWrite(rl, LOW);
      Bzz_off();
      oled.clearDisplay();              // Clear screen
      oled.setTextXY(0,3);              // Set cursor position, start of line 0
      oled.putString("CODIGO");
      oled.setTextXY(2,3);
      oled.putString("INCORRECTO");
      oled.setTextXY(4,3);
      oled.putString("LARGO!");
      delay(3000);
      oled.clearDisplay();

      
    }
    if(option=='b') {
      digitalWrite(led, HIGH);
      Serial.println("ON");
      Buzzer();
      oled.clearDisplay();              // Clear screen
      oled.setTextXY(0,3);              // Set cursor position, start of line 0
      oled.putString("CODIGO");
      oled.setTextXY(2,3);
      oled.putString("CORRECTO");
      oled.setTextXY(4,3);
      oled.putString("BIENVENIDO");
      digitalWrite(rl, HIGH);
      delay(5000);
      digitalWrite(rl, LOW);
      oled.clearDisplay();
    }
  }
}
