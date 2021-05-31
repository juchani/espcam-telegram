#include <OneWire.h>

OneWire ibutton (3);

byte buffer[20];
byte Usuario1[8] = {0x1, 0x9F, 0x9E, 0xB4, 0x1, 0x0, 0x0, 0x89} ;
void setup() {
  Serial.begin(9600);
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
  Serial.println(" ");
  Serial.println(comparar(buffer,Usuario1));
}


boolean comparar(byte array1[], byte array2[])
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
