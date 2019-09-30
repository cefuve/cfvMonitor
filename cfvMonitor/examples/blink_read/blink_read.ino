#include <cfvMonitor.h>

cfvMonitor monitor;

void setup() {
  monitor.init();
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
}
