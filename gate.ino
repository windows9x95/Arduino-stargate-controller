void setup() {
  pinMode(2, OUTPUT); //chevron 1
  pinMode(3, OUTPUT); //chevron 2
  pinMode(4, OUTPUT); //chevron 3
  pinMode(5, OUTPUT); //chevron 4
  pinMode(6, OUTPUT); //chevron 5
  pinMode(7, OUTPUT); //chevron 7
  pinMode(8, OUTPUT); //chevron 8
  pinMode(9, OUTPUT); //chevron 9
  pinMode(10, OUTPUT); //chevron 6
  pinMode(11, INPUT); //brb
}

void loop() {
    delay(5000);
    digitalWrite(2, HIGH);
    digitalWrite(7, HIGH);
    delay(1000);
    digitalWrite(7, LOW);
    delay(2000);
    
    digitalWrite(3, HIGH);
    digitalWrite(7, HIGH);
    delay(1000);
    digitalWrite(7, LOW);
    delay(2000);

    digitalWrite(4, HIGH);
    digitalWrite(7, HIGH);
    delay(1000);
    digitalWrite(7, LOW);
    delay(2000);

    digitalWrite(5, HIGH);
    digitalWrite(7, HIGH);
    delay(1000);
    digitalWrite(7, LOW);
    delay(2000);

    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    delay(1000);
    digitalWrite(7, LOW);
    delay(2000);

    digitalWrite(8, HIGH);
    digitalWrite(7, HIGH);
    delay(1000);
    digitalWrite(7, LOW);
    delay(2000);
/**
//chevron 8 and 9 controller
    digitalWrite(9, HIGH);
    digitalWrite(7, HIGH);
    delay(1000);
    digitalWrite(7, LOW);
    delay(2000);

    digitalWrite(10, HIGH);
    digitalWrite(7, HIGH);
    delay(1000);
    digitalWrite(7, LOW);
    delay(2000);
**/
    digitalWrite(2, HIGH);
    digitalWrite(7, HIGH);
    delay(30000);
    

  

}
