/**
 * Copyright: Thomas Ell
 */

#include <Adafruit_CircuitPlayground.h>
#include <math.h>
int pos;
void setup() {
  CircuitPlayground.begin();
}
void loop() {
  float x = CircuitPlayground.motionX();
  float y = CircuitPlayground.motionY();
  float angle = (atan2(y, x) * 180) / PI;
  CircuitPlayground.clearPixels();
  if (angle >= 0 && angle < 36) {
	pos = 0;
  } else if (angle >= 36 && angle < 72) {
	pos = 1;
  } else if (angle >= 72 && angle < 108) {
	pos = 2;
  } else if (angle >= 108 && angle < 144) {
	pos = 3;
  } else if (angle >= 144 && angle < 180) {
	pos = 4;
  } else if (angle >= -180 && angle < -144) {
	pos = 5;
  } else if (angle >= -144 && angle < -108) {
	pos = 6;
  } else if (angle >= -108 && angle < -72) {
	pos = 7;
  } else if (angle >= -72 && angle < -36) {
	pos = 8;
  } else if (angle >= -36 && angle < 0) {
	pos = 9;
  }
  CircuitPlayground.strip.setPixelColor(pos, 255, 255, 255);
  CircuitPlayground.strip.show();
  delay (100);
}