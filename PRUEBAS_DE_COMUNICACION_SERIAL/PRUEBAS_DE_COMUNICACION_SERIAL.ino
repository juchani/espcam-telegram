/*#define bzz 2
#define rl 1 
int cont=0;

void setup(){
  //iniciamos el puerto serie
  Serial.begin(115200); //EL SEEED SE USA CON 115200 BAUDIOS
  pinMode(bzz, OUTPUT);
  pinMode(rl,OUTPUT);
}


void loop(){
  //Imprimimos el valor del contador
  Serial.print("Contador: ");
  Serial.println(cont);
  
  //incrementamos el contador y esperamos un segundo
  cont++;
  Buzzer();
  relay();
  delay(2000);
}*/
