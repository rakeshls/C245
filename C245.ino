void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600)

}

void loop() {
  // put your main code here, to run repeatedly:
  int analogValue = analogRead(4);
  float voltage = floatMap(analogValue,0,4095,0,3.3);
  Serial.print("analog:");
  Serial.print(analogValue);
  Serial.print("voltage:");
  Serial.print(voltage:)*1000
  delay(1000)

}
