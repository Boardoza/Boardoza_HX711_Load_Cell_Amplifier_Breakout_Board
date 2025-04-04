#include <Arduino.h>
#include "HX711.h"

#define DOUT_PIN 2
#define CLK_PIN 3

HX711 scale(DOUT_PIN, CLK_PIN);
bool start_up=1;
void setup() {
  Serial.begin(115200);
  scale.begin();
  //scale.setGain(128); // You can set the gain value according to your load cell
  //scale.setCalibrationFactor(1000); // Set the calibration factor according to your setup
  
}

void loop() {
  if (start_up)
    {
    delay(100);
    scale.tare(10);
    start_up = 0; 
    }
  Serial.print(scale.setOffset( scale.getRawValue()) );
  Serial.println("  ");


  delay(100); // Delay for 100 milisecond before next reading
}