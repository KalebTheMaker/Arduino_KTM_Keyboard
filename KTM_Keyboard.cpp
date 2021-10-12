#include "Arduino.h"
#include "KTM_Keyboard.h"
#include <Keyboard.h>

KTM_Keyboard::KTM_Keyboard() {}

void KTM_Keyboard::init() 
{
  Keyboard.begin();
  this->mod_delay = 50;
  this->key_delay = 25;
}

void KTM_Keyboard::setModDelay(int dly)
{
  this->mod_delay = dly; 
}

int KTM_Keyboard::getModDelay()
{
  return this->mod_delay;
}

void KTM_Keyboard::setKeyDelay(int dly)
{
  this->key_delay = dly;
}

int KTM_Keyboard::getKeyDelay() {
  return this->key_delay;
}

void KTM_Keyboard::ctrlMod(char key)
{
  Keyboard.press(KEY_LEFT_CTRL);
  delay(this->mod_delay);
  Keyboard.press(key);
  delay(this->key_delay);
  Keyboard.releaseAll();

}

void KTM_Keyboard::shiftMod(char key)
{
  Keyboard.press(KEY_LEFT_CTRL);
  delay(this->mod_delay);
  Keyboard.press(key);
  delay(this->key_delay);
  Keyboard.releaseAll();
}

void KTM_Keyboard::altMod(char key)
{
  Keyboard.press(KEY_LEFT_CTRL);
  delay(this->mod_delay);
  Keyboard.press(key);
  delay(this->key_delay);
  Keyboard.releaseAll();
}

void KTM_Keyboard::press(char key)
{
  Keyboard.press(key);
  delay(this->key_delay);
  Keyboard.releaseAll();
}
