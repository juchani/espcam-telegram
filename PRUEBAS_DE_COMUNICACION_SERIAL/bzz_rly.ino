void Buzzer(){
  digitalWrite(bzz, HIGH);
  delay(200);
  digitalWrite(bzz, LOW);
  delay(200);

  }
void Bzz_off(){
  digitalWrite(bzz, HIGH);
  delay(100);
  digitalWrite(bzz, LOW);
  delay(100);
  digitalWrite(bzz, HIGH);
  delay(100);
  digitalWrite(bzz, LOW);
  delay(100);
  }
  
void relay(){
  digitalWrite(rl, HIGH);
  delay(1000);
  digitalWrite(rl, LOW);
  delay(500);
  }
