int randNum;
void setup(){
  pinMode(2, OUTPUT);
  pinMod(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, INPUT);
  randomSeed(analogRead(0));
}
void loop(){
  if(digitalRead(7)){
    randNum = random(1,5);
    if(randNum == 1){
      digitalWrite(2, HIGH);
      delay(200);
      digitalWrite(2, LOW);
    }
    if(randNum == 2){
      digitalWrite(3, HIGH);
      delay(200);
      digitalWrite(3, LOW);
    }
    if(randNum == 3){
      digitalWrite(4, HIGH);
      delay(200);
      digitalWrite(4, LOW);
  }
  if(randNum == 4){
    digitalWrite(5, HIGH);
    delay(200);
    digitalWrite(5,LOW);
  }
  if(randNum == 5){
    digitalWrite(6, HIGH);
    delay(200);
    digitalWrite(6, LOW);
   }
  }
}
