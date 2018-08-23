//This sketch makes a Lego Compressor run using Lego Power Function Motors
//The electronics use a HPX5000P pressure sensor switch to shut of the 
//motor(s) when pressure is attained

class Compressor
{
  public:
    Compressor(int enAPin, int enBPin, int sensorPin);
    void begin();
    void setENPinsLow();
    void setENPinsHigh();
    bool readPressureSensor();
  private:
    int _enAPin;
    int _enBPin;
    int _sensorPin;
    bool _pressureSensor;
  
};

Compressor::Compressor(int enAPin, int enBPin, int sensorPin)
{
  _enAPin = enAPin;
  _enBPin = enBPin;
  _sensorPin = sensorPin;
}

void Compressor::begin()
{
  pinMode(_enAPin, OUTPUT);
  pinMode(_enBPin, OUTPUT);
}

void Compressor::setENPinsLow()
{
  digitalWrite(_enAPin, LOW);
  digitalWrite(_enBPin, LOW);
}

void Compressor::setENPinsHigh()
{
  digitalWrite(_enAPin, HIGH);
  digitalWrite(_enBPin, HIGH);
}

bool Compressor::readPressureSensor() 
{
  bool pressureSensor;
  int currentVolts;
  int previousVolts;
  int maxPressure = 350;
  int minPressure = 200;
  currentVolts = analogRead(_sensorPin);
  if (currentVolts <= minPressure) {
    pressureSensor = true;
  }
  else if (currentVolts > minPressure && previousVolts < currentVolts && currentVolts <= maxPressure) {
    pressureSensor = true; 
  }
  else if (currentVolts > minPressure && previousVolts >= currentVolts && currentVolts <= maxPressure) {
    pressureSensor = false;
  }
  else {
    pressureSensor = false;
  }
  previousVolts = currentVolts;
  
  return pressureSensor;
}


Compressor compressor(10,11,A1);

void setup() {
  compressor.begin();
  compressor.setENPinsLow();
}

void loop() {
  bool state;
  state = compressor.readPressureSensor();
  if (state == true) {
    compressor.setENPinsHigh();
  } else {
    compressor.setENPinsLow();
  } 

// convert the reading to voltage
//float sensorVoltage = sensorValue * (5.0 / 1023.0);
// convert the reading to it’s PSI equivilant [(Vout = Vs*(0.0018*P+0.04)), (Vs = 5.0Vdc)]
// thus: P= (-V+0.2)/0.009 (kPa)
//float kPa = (sensorVoltage – 0.2) / 0.009;
// convert to psi
////float PSI = kPa * (0.145037738);

// print the results to the serial monitor:
//Serial.print("Pressure Output Voltage = " );
//Serial.print(sensorVoltage);
//Serial.print(" / ");
//Serial.print(kPa);
//Serial.print(" kPa ");
//Serial.print(PSI);
//Serial.println(" PSI");

// wait 2 milliseconds before the next loop
// for the analog-to-digital converter to settle
// after the last reading:
}



