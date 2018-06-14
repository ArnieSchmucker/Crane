byte ledPin1 = 13;
byte ledPin2 = 10;

void setup() {

  Serial.begin(9600);
  pinMode(ledPin1, OUTPUT); 
  digitalWrite(ledPin1, LOW);
  pinMode(ledPin2, OUTPUT); 
  digitalWrite(ledPin2, LOW);  

}

void loop() {
  char c;
  if (Serial.available()  > 0) {
    c = Serial.read();
    //Serial.println(c);
  }

  switch (c) {
    case 'A':
      digitalWrite(ledPin1, HIGH);
      break;
    case 'B':
      digitalWrite(ledPin2, HIGH);
      break;
    default:
      digitalWrite(ledPin1, LOW);
      digitalWrite(ledPin2, LOW);
      break;
  }
  delay(100);
}
