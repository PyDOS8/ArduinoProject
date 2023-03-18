int randNum;
void setup(){
  pinMode(2, OUTPUT);
  pinMod(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}
void loop(){
  randNum = random(1,5);
  if(randNum == 1){
     digitalWrite(2, HIGH);
     delay(200);
     digitalWrite(2, LOW);
    }
}
