#include <OneWire.h>

OneWire ibutton (3); 

byte buffer[20]; 

void setup(){
 Serial.begin(9600); 
   
}

void loop(){
   
 if (!ibutton.search (buffer)){
  ibutton.reset_search();
    delay(200);
    return;
 }
  
  for (int x = 0; x<8; x++){  
    Serial.print(buffer[x],HEX);
     Serial.print(" "); 
   }
   Serial.println("\n"); 
   int crc;
   crc = ibutton.read();
//   crc = ibutton.crc8(buffer, 7);
   Serial.println(crc);
} 
 
