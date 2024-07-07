#define DEBUG_ENABLE
#include <SimpleDebug.h>

void setup() {
  Serial.begin(115200);
  DEBUG(Serial.println("Debugging is enabled!"));
  pinMode(10, OUTPUT);
  digitalWrite(10, LOW);
}

void loop() {
  int sensor_reading = analogRead(A0);
  DEBUG(
    Serial.print("Sensor reading: ");
    Serial.println(sensor_reading);
  );
  digitalWrite(10, HIGH);
  delay(100);
  digitalWrite(10, LOW);
  delay(1000);
}
