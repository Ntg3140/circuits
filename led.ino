int ledPin = 9;
void setup() {
  // put your setup code here, to run once:
pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(ledPin,127);
delay(500);
digitalWrite(ledPin, 0);
delay(500);
}
