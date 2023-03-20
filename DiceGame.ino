int randNum;
void setup(){
  pinMode(2, OUTPUT);//this tells the arduino to set pin mode 2 to output which will allow us to turn it on, etc
  pinMode(3, INPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  Serial.begin(9600);
}
void loop(){
  if(digitalRead(3)){
    randNum = random(1,19);
    Serial.println(randNum);
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
      digitalWrite(2, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      delay(1000);
      digitalWrite(5, LOW);
      digitalWrite(4, LOW);
      digitalWrite(2, LOW);
    }
    if(randNum == 4){
      digitalWrite(2, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      delay(1000);
      digitalWrite(6, LOW);
      digitalWrite(5, LOW);
      digitalWtite(4, LOW);
      digitalWrite(2, LOW);
    }
    if(randNum == 5){
      digitalWrite(2, HIGH);
      digitlaWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      delay(1000);
      digitalWrite(7, LOW);
      digitalWrite(6, LOW);
      digitalWrite(5, LOW);
      digitalWrite(2, LOW);
    }
    if(randNum == 6){
      digitalWrite(2, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(8, HIGH);
      delay(1000);
      digitalWrite(8, LOW);
      digitalWrite(7, LOW);
      digitalWrite(6, LOW);
      digitalWrite(5, LOW);
      digitalWrite(4, LOW);
      digitalWrite(2, LOW);
    }
    if(randNum == 7){
      digitalWrite(2, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(9, HIGH);
      delay(1000);
      digitalWrite(9, LOW);
      digitalWrite(8, LOW);
      digitalWrite(7, LOW);
      digitalWrite(6, LOW);
      digitalWrite(5, LOW);
      digitalWrite(4, LOW);
      digitalWrite(2, LOW);
    }
    if(randNum == 8){
        digitalWrite(2, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(5, HIGH);
        digitalWrite(6, HIGH);
        digitalWrite(7, HIGH);
        digitalWrite(8, HIGH);
        digitalWrite(9, HIGH);
        digitalWrite(10, HIGH);
        delay(1000);
        digitalWrite(10, LOW);
        digitalWrite(9, LOW);
        digitalWrite(8, LOW);
        digitalWrite(7, LOW);
        digitalWrite(6, LOW);
        digitalWrite(5, LOW);
        digitalWrite(4, LOW);
        digitalWrite(2, LOW);
    }
    if(randNum == 9){
      digitalWrite(2, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      delay(1000);
      digitalWrite(11, LOW);
      digitalWrite(10, LOW);
      digitalWrite(9, LOW);
      digitalWrite(8, LOW);
      digitalWrite(7, LOW);
      digitalWrite(6, LOW);
      digitalWrite(5, LOW);
      digitalWrite(4, LOW);
      digitalWrite(2, LOW);
    }
    if(randNum == 10){
      digitalWrite(2, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      delay(1000);
      digitalWrite(12, LOW);
      digitalWrite(11, LOW);
      digitalWrite(10, LOW);
      digitalWrite(9, LOW);
      digitalWrite(8, LOW);
      digitalWrite(7, LOW);
      digitalWrite(6, LOW);
      digitalWrite(5, LOW);
      digitalWrite(4, LOW);
      digitalWrite(2, LOW);
    }
    if(randNum == 11){
      digitalWrite(4, HIGH);
      delay(1000);
      digitalWrite(4, LOW);
    }
    if(randNum == 12){
      digitalWrite(5, HIGH);
      delay(1000);
      digitalWrite(5, LOW);
    }
    if(randNum == 13){
      digitalWrite(6, HIGH);
      delay(1000);
      digitalWrite(6, LOW);
    }
    if(randNum == 14){
      digitalWrite(7, HIGH);
      delay(1000);
      digitalWrite(7, LOW);
    }
    if(randNum == 15){
      digitalWrite(8, HIGH);
      delay(1000);
      digitalWrite(8, LOW);
    }
    if(randNum == 16){
      digitalWrite(9, HIGH);
      delay(1000);
      digitalWrite(9, LOW);
    }
    if(randLED == 17){
      digitalWrite(10, HIGH);
      delay(1000);
      digitalWrite(10, LOW);
    }
    if(randLED == 18){
      digitalWrite(11, HIGH);
      delay(1000);
      digitalWrite(11, LOW);
    }
    if(randLED == 19){
      digitalWrite(12, HIGH);
      delay(2000);
      digitalWrite(12, LOW);
    }
  }
}
