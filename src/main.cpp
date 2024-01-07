#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.setDebugOutput(true);

  int result = myFunction(2, 3);
}

int loopNumber = 0;
void loop() {
  Serial.printf("loop number: %d\n", loopNumber);
  delay(1000);
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}
