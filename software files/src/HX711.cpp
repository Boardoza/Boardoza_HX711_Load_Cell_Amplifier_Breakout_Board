#include "HX711.h"

int32_t offSetValue = 0;
/**
 * @brief Constructor for the HX711 class.
 * 
 * @param data Data pin connected to the HX711 module.
 * @param clock Clock pin connected to the HX711 module.
 */
HX711::HX711(byte data, byte clock) {
    dataPin = data;
    clockPin = clock;
}

/**
 * @brief Initializes the HX711 module.
 * 
 * This function initializes the HX711 module by beginning communication with Wire, setting data pin as INPUT, clock pin as OUTPUT,
 * powering down the module, delaying for 10 microseconds, and then powering up the module.
 */
void HX711::begin() {
    Wire.begin();
    pinMode(dataPin, INPUT);
    pinMode(clockPin, OUTPUT);
    powerDown();
    delayMicroseconds(10);
    powerUp();
}

/**
 * @brief Checks if the HX711 module is ready for data retrieval.
 * 
 * This function checks if the HX711 module is ready for data retrieval by reading the data pin and checking if it is LOW.
 * @return True if the module is ready, false otherwise.
 */
bool HX711::isReady() {
    return digitalRead(dataPin) == LOW;
}

/**
 * @brief Retrieves the raw value from the HX711 module.
 * 
 * This function retrieves the raw value from the HX711 module based on the specified channel gain.
 * It waits for the module to be ready, reads the data pins, and calculates the raw value.
 * 
 * @param chanGain The channel gain value to determine the raw value.
 * @return The raw value read from the HX711 module as a 32-bit integer.
 */
int32_t HX711::getRawValue(channelGain chanGain) {
    while(!isReady()) {
        // Wait for HX711 to ready
    }
    digitalWrite(clockPin, LOW);
    uint32_t value = 0;
    
    for (int i = 0; i < 24; i++) {
        digitalWrite(clockPin, HIGH);
        delayMicroseconds(10);
        value = (value << 1) | digitalRead(dataPin);
        digitalWrite(clockPin, LOW);
        delayMicroseconds(10);
    }

    for (int i = 0; i < chanGain - 24; i++) {
        digitalWrite(clockPin, HIGH);
        digitalWrite(clockPin, LOW);
    }
    if (value & 0x800000) {
        value |= 0xFF000000;
    }

    return (int32_t) value;
}

/**
 * @brief Performs tare operation on the HX711 module.
 * 
 * This function performs tare operation by taking multiple readings and calculating the average value as the offset value.
 * 
 * @param times The number of times to perform tare operation and calculate the offset value.
 */
void HX711::tare(byte times) {
    long sum = 0;

    for(byte i = 0; i < times; ++i) {
        sum += getRawValue();
        delay(100);
    }
    offSetValue = (sum / times);
}

/**
 * @brief Sets the offset value for the HX711 module.
 * 
 * This function sets the offset value for the HX711 module by subtracting the provided temporary ADC value from the stored offset value.
 * 
 * @param tempADCValue The temporary ADC value to be used in setting the offset.
 * @return The new offset value after setting it.
 */
int32_t HX711::setOffset( int32_t tempADCValue ) {
    return (tempADCValue - offSetValue);
}

/**
 * @brief Powers down the HX711 module.
 * 
 * This function powers down the HX711 module by setting the clock pin to HIGH.
 */
void HX711::powerDown() {
    digitalWrite(clockPin, HIGH);
}

/**
 * @brief Powers up the HX711 module.
 * 
 * This function powers up the HX711 module by setting the clock pin to LOW.
 */
void HX711::powerUp() {
    digitalWrite(clockPin, LOW);
}