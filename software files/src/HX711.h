#ifndef HX711_h
#define HX711_h

#include <Arduino.h>
#include <Wire.h>

enum channelGain {
    CHANNEL_A_GAIN_128 = 25,
    CHANNEL_B_GAIN_64 = 27,
    CHANNEL_B_GAIN_32 = 26
};

class HX711 {
  public:
    HX711(byte data, byte clock);

    void begin();
    bool isReady();
    int32_t getRawValue(channelGain chanGain = CHANNEL_A_GAIN_128);
    void tare(byte times = 10);
    int32_t setOffset(int32_t tempADCValue );
    void powerDown();
    void powerUp();

  private:
    byte dataPin;
    byte clockPin;
    int32_t offSettedValue;

};

#endif