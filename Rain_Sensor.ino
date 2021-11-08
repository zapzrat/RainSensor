int statusSensor  = 0;
void setup() {
  Serial.begin(9600);
  Serial.println("Micro Project Thailand ~^.^~ ");
  pinMode(D4, INPUT);
  pinMode(D0, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  statusSensor = digitalRead(D4);

  Serial.print("StatusSensor : "); Serial.println(statusSensor);

  if (statusSensor == 1) {
    digitalWrite(D0 , LOW);
  }
  else if (statusSensor == 0) {
    digitalWrite(D0 , HIGH);

  }

  delay(200);
}
