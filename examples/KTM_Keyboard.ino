#include <EasyButton.h>
#include "KTM_Keyboard.h"

// Instantiate Keyboard Class
KTM_Keyboard kb;

// Buttons
#define TEST_BUTTON_PIN 2
EasyButton testBtn(TEST_BUTTON_PIN, 40, true);

void onPressed() {
  //Serial.println("Button Pressed");
  kb.ctrlMod('f');
}

void onPressedFor() {
  kb.ctrlMod('k');
}

void setup() {
  //Serial.begin(115200);
  kb.init();

  testBtn.begin();
  testBtn.onPressed(onPressed);
  testBtn.onPressedFor(1000, onPressedFor);
}

void loop() {
  testBtn.read();
}
