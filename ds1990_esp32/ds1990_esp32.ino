#include <OneWire.h>
OneWire ibutton (15);
byte buffer[20];//lista
byte Usuario1[8] = {0x1, 0x50, 0x52, 0xB5, 0x1, 0x0, 0x0, 0xBE} ;


void setup() {
  Serial.begin(9600);
  Serial.print("iniciando");
  Serial.println("............");

}


void loop() {

  if (!ibutton.search (buffer)) {
    ibutton.reset_search();
    delay(200);
    return;
  }

  for (int x = 0; x < 8; x++) {
    Serial.print(buffer[x], HEX);
    Serial.print(" ");
  }
 
  if(comparar(buffer,Usuario1)){
   Serial.print("\n acceso \t correcto \n ");
   delay(2000);
   Serial.println("reiniciando");
   ESP.restart(); 
  }
  else{
    Serial.println("acceso denegado");
  }
}

bool comparar(byte array1[], byte array2[])
{
  if (array1[0] != array2[0])return (false);
  if (array1[1] != array2[1])return (false);
  if (array1[2] != array2[2])return (false);
  if (array1[3] != array2[3])return (false);
  if (array1[4] != array2[4])return (false);
  if (array1[5] != array2[5])return (false);
  if (array1[6] != array2[6])return (false);
  if (array1[7] != array2[7])return (false);
  return (true);
}
