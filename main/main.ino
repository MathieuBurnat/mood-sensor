// set pins to the 4-rgb-legs-LED
const int TricolorLEDRed   = 9;
const int TricolorLEDGreen = 10;
const int TricolorLEDBlue  = 11;

// set pins to the LEDs
const int redSensorPin   = A0;
const int greenSensorPin  = A1;
const int blueSensorPin = A2;

// rgb value with sensor
int redValue = 0;
int greenValue = 0;
int blueValue = 0;

int redSensorValue = 0;
int greenSensorValue = 0;
int blueSensorValue = 0;

void setup() {
  Serial.begin(9600);
  pinMode(TricolorLEDGreen, OUTPUT);
  pinMode(TricolorLEDGreen, OUTPUT);
  pinMode(TricolorLEDBlue, OUTPUT);
}

void loop() {
  redSensorValue = analogRead(redSensorValue);
  delay(5);
  greenSensorValue = analogRead(greenSensorValue);
  delay(5);
  blueSensorValue = analogRead(blueSensorValue);
  delay(5);

  // Print led's sensor values
  Serial.print("Raw Sensor Values \t Red : ");
  Serial.print(redSensorValue);
  Serial.print("\t Green : ");
  Serial.print(greenSensorValue);
  Serial.print("\t Blue : ");
  Serial.print(blueSensorValue);

  // AnalogWrite(s)
  redValue = redSensorValue / 4;
  greenValue = greenSensorValue / 4;
  blueValue = blueSensorValue / 4;

  Serial.print("\t RGB : ");
  Serial.print(redValue);
  Serial.print(", ");
  Serial.print(greenValue);
  Serial.print(", ");
  Serial.println(blueValue);

  analogWrite(TricolorLEDRed, redValue);
  analogWrite(TricolorLEDGreen, greenValue);
  analogWrite(TricolorLEDBlue, blueValue);
}
