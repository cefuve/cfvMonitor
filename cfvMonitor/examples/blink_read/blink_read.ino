#include <cfvMonitor.h>

cfvMonitor cfvmonitor;

void setup() {
  cfvmonitor.init();
  pinMode(13, OUTPUT);
  cfvmonitor.println("Welcome to cfvMonitor!");
}

void loop() {
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
}
