byte incomingByte; // for incoming serial data
int dec;

void setup() {
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    // read the incoming byte:
    incomingByte = Serial.read();
    // HEX to int
    dec = (int)incomingByte;

    Serial.println(dec);
    // write number to SSR via pwm 9:
    analogWrite(9, dec);
  }
}
