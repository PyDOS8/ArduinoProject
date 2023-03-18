int randNum;
void setup(){
  pinMode(2, OUTPUT);
  pinMode(3, INPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}
void loop(){
  if(digitalRead(3)){
    randNum = random(1,7);
    if(randNum == 1){
      digitalWrite(2, HIGH);
      delay(1000);
      digitalWrite(2, LOW);
    }
    if(randNum == 2){
      digitalWrite(4, HIGH);
      digitalWrite(2, HIGH);
      delay(1000);
      digitalWrite(2, LOW);
      digitalWrite(4, LOW);
    }
    if(randNum == 3){
      Serial.println("You Win!");
      digitalWrite(2, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWtite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(8, HIGH)
      delay(1000);
      digitalWrite(8, LOW);
      digitalWrite(7, LOW);
      digitalWrite(6, LOW);
      digitalWrite(5, LOW);
      digitalWrite(4, LOW);
      digitalWrite(2, LOW);
    }
    if(randNum == 4){
      Serial.println("You Lose!");
      digitalWrite(2, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWtite(8, HIGH);
      digitalWrite(9, HIGH);
      delay(2000);
      digitalWrite(9, LOW);
      digitalWrite(8, LOW);
      digitalWrite(7, LOW);
      digitalWrite(6, LOW);
      digitalWrite(5, LOW);
      digitalWtite(4, LOW);
      digitalWrite(2, LOW);
    }
  }
}
