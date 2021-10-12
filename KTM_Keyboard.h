#ifndef KTM_Keyboard_h
#define KTM_Keyboard_h

#include <Arduino.h>

class KTM_Keyboard
{
  public:
    int mod_delay;
    int key_delay;
    KTM_Keyboard();
    void init();
    void setModDelay(int dly);
    int getModDelay();
    void setKeyDelay(int dly);
    int getKeyDelay();

    void ctrlMod(char key);
    void shiftMod(char key);
    void altMod(char key);
    void press(char key);
  private:
};

#endif