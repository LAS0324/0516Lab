int ledPin = 9;        // LED connected to digital pin 9 (PWM)
int analogPin = A0;    // potentiometer connected to analog pin A0
int val = 0;           // variable to store the read value

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);  // sets the pin as output
}

void loop() {
  val = analogRead(analogPin);  // read the input pin
  analogWrite(ledPin, val / 4); // scale from 0–1023 to 0–255
  Serial.println(val);          // print the value
  delay(1);                     // delay for stability
}
