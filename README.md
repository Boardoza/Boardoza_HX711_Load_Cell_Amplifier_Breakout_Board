# Boardoza HX711 Load Cell Amplifier Breakout Board
HX711 is a precision 24-bit analog digital converter (ADC) designed for weigh scales and industrial control applications to interface directly with a bridge sensor. It is possible to use both outputs of the integrated circuit.

<!-- The Boardoza HX711 Load Cell Amplifier Breakout Board is a precision 24-bit analog-to-digital converter (ADC) designed specifically for load cell and weight scale applications. It provides high-resolution measurements and stable signal conditioning, making it ideal for industrial scales, pressure sensors, and other precision measurement applications. -->

### [Click here to purchase!](https://www.ozdisan.com)
|Front Side|Back Side|
|:---:|:---:|
| ![ HX711 Front](./assets/HX711%20Front.png)| ![ HX711 Back](./assets/HX711%20Back.png)|

---
## Key Features
- Two selectable differential input channels (To use channel B, R7(100R), R8(100R) and C8(100nF) must be populated.)
- Current consumption including on-chip analog power supply regulator: normal operation < 1.5mA, power down < 1uA
- Operation supply voltage range: 2.7 ~ 5.5V

<!-- - 24-bit ADC Resolution: Provides high-resolution digital output for precise weight measurements.
- Dual-Channel Differential Inputs: Supports two differential input channels for flexible load cell connections.
- Low Noise Performance: Ensures stable and reliable readings with minimal noise interference.
- Adjustable Data Rate: Selectable data output rates of 10SPS or 80SPS, allowing for high-speed or high-precision modes.
- Simple Interface: Serial interface allows for easy connection to microcontrollers and development boards.
- Compact Design: Small form factor for easy integration into various applications.
- Power Efficient: Low power consumption ideal for battery-powered devices.
- Onboard Regulator: Integrated voltage regulator provides stable power supply to the load cell and ADC. -->

---
## Technical Specifications
**Input Voltage:**	2.7V - 5.5V

**Functions:**	24-Bit Analog-to-Digital Converter (ADC) for Weigh Scales

<!-- 
**Functions:** Load Cell Signal Amplification, High-Resolution ADC

**ADC Resolution:** 24-bit

**Gain:** Programmable gain of 32, 64, and 128

**Data Output Rate:** 10SPS (Slow Mode), 80SPS (Fast Mode)

**Interface:** Serial (Clock and Data) -->

**Supply Current:** 1.5mA

**Operating Temperature:**	-40°C ~ +85°C

**Board Dimensions:**	20mm x 40mm

---
## Board Pinout
| ( J1 ) Pin Number | Pin Name | Description |
| :---: | :---: | --- |
| 1 | VCC | 2.7V -  5.5V |
| 2 | VDD | 2.7V -  5.5V |
| 3 | DAT | Serial Data Output |
| 4 | CLK | Serial Clock Input |
| 5 | GND | Negative Power Supply |

| ( J2 ) Pin Number | Pin Name | Description |
| :---: | :---: | --- |
| 1 | B+ | + Signal (Second Channel)  |
| 2 | B- | - Signal (Second Channel) |

| ( J3 ) Pin Number | Pin Name | Description |
| :---: | :---: | --- |
| 1 | RED/E+ | + Excitation |
| 2 | BLK/E- | - Excitation |
| 3 | WHT/A- | - Signal |
| 4 | GRN/A+ | + Signal |

| ( JP1 ) Pin Number | Description |
| :---: | --- |
| 1-2 | 80SPS |
| 2-3 | 10SPS |

---
## Board Dimensions

<img src="./assets/HX711 Dimension.png" alt=" HX711 Dimension" width="450"/>

---
## Step Files

[Boardoza HX711.step](./assets/HX711%20Step.step)

---
## Datasheet

[Boardoza HX711 Datasheet.pdf](./assets/HX711%20Datasheet.pdf)

---
## Version History
- V1.0.0 - Initial Release

---
## Support
- If you have any questions or need support, please contact support@boardoza.com

---
## License

Shield: [![CC BY-SA 4.0][cc-by-sa-shield]][cc-by-sa]

This work is licensed under a [Creative Commons Attribution-ShareAlike 4.0 International License][cc-by-sa].

[![CC BY-SA 4.0][cc-by-sa-image]][cc-by-sa]

[cc-by-sa]: http://creativecommons.org/licenses/by-sa/4.0/
[cc-by-sa-image]: https://licensebuttons.net/l/by-sa/4.0/88x31.png
[cc-by-sa-shield]: https://img.shields.io/badge/License-CC%20BY--SA%204.0-lightgrey.svg
