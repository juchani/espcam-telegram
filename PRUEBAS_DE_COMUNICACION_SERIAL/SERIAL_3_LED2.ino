/*#define bzz 2
#define rl 1
int option;
int led = 6;

void setup(){
  Serial.begin(115200);
  pinMode(led, OUTPUT); 
  pinMode(bzz, OUTPUT);
  pinMode(rl,OUTPUT);
}

void loop(){
  //si existe información pendiente
  if (Serial.available()>0){
    //leeemos la opcion
    char option = Serial.read();
    //si la opcion esta entre '1' y '9'
    if (option >= '1' && option <= '9')
    {
      //restamos el valor '0' para obtener el numeroenviado
      option -= '0';
      for(int i=0;i<option;i++){
         digitalWrite(led, HIGH);
         delay(500);
         digitalWrite(led, LOW);
         delay(300);
         Buzzer();
         relay();
      }
    }
  }
}*/
