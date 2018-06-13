#include "TactileSwitch.h"
TactileSwitch switch1(10, false);
//TactileSwitch switch2(11, false);
//TactileSwitch switch3(4, false);
//TactileSwitch switch4(5, false);
//TactileSwitch switch5(6, false);
//TactileSwitch switch6(7, false);
//TactileSwitch switch7(8, false);
//TactileSwitch switch8(9, false);


void setup() {
  Serial.begin(9600);
  switch1.begin();
//  switch2.begin();
//  switch3.begin();
//  switch4.begin();
//  switch5.begin();
//  switch6.begin();
//  switch7.begin();
//  switch8.begin();

}

void loop() {
  bool x1 = switch1.momentary();
  if (x1 == true) {
    Serial.print('A');
  } else {
    Serial.print('X');
  }
  //bool x2 = switch2.momentary();
  //bool x3 = switch3.momentary();
  //bool x4 = switch4.momentary();
  //bool x5 = switch5.momentary();
  //bool x6 = switch6.momentary();
  //bool x7 = switch7.momentary();
  //bool x8 = switch8.momentary();

  //Serial.print(x1);
  //Serial.print(x2);
  //Serial.print(x3);
  //Serial.print(x4);
  //Serial.print(x5);
  //Serial.print(x6);
  //Serial.print(x7);
  //Serial.println(x8);
 /*
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
  */
  delay(100);
}
