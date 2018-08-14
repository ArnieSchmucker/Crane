
const byte switch1 = 10;
const byte switch2 = 11;
const byte switch3 = 4;
const byte switch4 = 5;
const byte switch5 = 6;
const byte switch6 = 7;
const byte switch7 = 8;
const byte switch8 = 9;

void setup() {
  Serial.begin(9600);
  
  pinMode(switch1, INPUT);
  pinMode(switch2, INPUT);
  pinMode(switch3, INPUT);
  pinMode(switch4, INPUT);
  pinMode(switch5, INPUT);
  pinMode(switch6, INPUT);
  pinMode(switch7, INPUT);
  pinMode(switch8, INPUT);
}

void loop() {
  bool x1 = digitalRead(switch1);
  bool x2 = digitalRead(switch2);
  bool x3 = digitalRead(switch3);
  bool x4 = digitalRead(switch4);
  bool x5 = digitalRead(switch5);
  bool x6 = digitalRead(switch6);
  bool x7 = digitalRead(switch7);
  bool x8 = digitalRead(switch8);
  
  if (x1 == true && x2 == false && x3 == false && x4 == false && x5 == false && x6 == false && x7 == false && x8 == false) {
    Serial.print('A');
  } else if (x1 == false && x2 == true && x3 == false && x4 == false && x5 == false && x6 == false && x7 == false && x8 == false ) {
    Serial.print('B');
  } else if (x1 == false && x2 == false && x3 == true && x4 == false && x5 == false && x6 == false && x7 == false && x8 == false) {
    Serial.print('C');
  } else if (x1 == false && x2 == false && x3 == false && x4 == true && x5 == false && x6 == false && x7 == false && x8 == false) {
    Serial.print('D');
    } else if (x1 == false && x2 == false && x3 == false && x4 == false && x5 == true && x6 == false && x7 == false && x8 == false ) {
    Serial.print('E');
  } else if (x1 == false && x2 == false && x3 == false && x4 == false && x5 == false && x6 == true && x7 == false && x8 == false) {
    Serial.print('F');
  } else if (x1 == false && x2 == false && x3 == false && x4 == false && x5 == false && x6 == false && x7 == true && x8 == false) {
    Serial.print('G');
  } else if (x1 == false && x2 == false && x3 == false && x4 == false && x5 == false && x6 == false && x7 == false && x8 == true) {
    Serial.print('H');
  } else {
    Serial.print('X');
  }

  delay(100);
}
