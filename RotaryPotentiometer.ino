int ledPin = 9;        // LED connected to digital pin 9 (PWM)
int analogPin = A0;    // potentiometer connected to analog pin A0
int val = 0;           // variable to store the read value

void setup() {
  
  pinMode(ledPin, OUTPUT);  // sets the pin as output
  Serial.begin(9600);
}

void loop() {
  val = analogRead(analogPin);  // read the input pin
  
  Serial.println(val);          // print the value
  if(val<500) val=500;
  if(val>800) val=800;
  int leddimming = map(val,500,800,0,100);
  analogWrite(ledPin,leddimming); // scale from 0–1023 to 0–255
  delay(1);                     // delay for stability
}
