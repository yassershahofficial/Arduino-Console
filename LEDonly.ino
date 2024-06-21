#define ledPower_pin 8

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPower_pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledPower_pin,1);
  delay(3000);
  digitalWrite(ledPower_pin,0);
  delay(3000);
}
