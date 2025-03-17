# Boardoza HX711 24-Bit ADC Module

The HX711 24-Bit Analog-to-Digital Converter (ADC) Module is designed for precision load cell measurements, making it ideal for electronic weighing scales and industrial control applications. It features a low-noise programmable gain amplifier and supports two selectable differential input channels. The module operates with low power consumption, making it suitable for battery-powered applications.

## [Click here to purchase!](https://ozdisan.com/maker-ve-iot-urunleri/boardoza/boardoza-modulleri/BOARDOZA-HX711/1206514)

|Front Side|Back Side|
|:---:|:---:|
| ![ HX711 Front](./assets/HX711%20Front.png)| ![ HX711 Back](./assets/HX711%20Back.png)|

---

## Key Features

- 24-bit ADC designed for weigh scales and industrial applications.
- Two selectable differential input channels (To use channel B, R7(100R), R8(100R), and C8(100nF) must be populated).
- Low power consumption: <1.5mA in normal operation, <1µA in power-down mode.
- Integrated low-noise programmable gain amplifier.
- Selectable output data rates: 10SPS or 80SPS.
- Wide operating voltage range: 2.7V to 5.5V.

---

## Technical Specifications

**Input Voltage:** 2.7V - 5.5V  
**Functions:** 24-Bit ADC for load cells and weigh scales  
**Supply Current:** 1.5mA  
**Operating Temperature:** -40°C ~ +85°C  
**Board Dimensions:** 20mm x 40mm  

---

## Board Pinout

### J1 Connector

| Pin Number | Pin Name | Description |
| :---: | :---: | --- |
| 1 | VCC | 2.7V - 5.5V Power Input |
| 2 | VDD | 2.7V - 5.5V Power Input |
| 3 | DAT | Serial Data Output |
| 4 | CLK | Serial Clock Input |
| 5 | GND | Ground |

### J2 Connector

| Pin Number | Pin Name | Description |
| :---: | :---: | --- |
| 1 | B+ | Positive Signal (Second Channel) |
| 2 | B- | Negative Signal (Second Channel) |

### J3 Connector (Load Cell Interface)

| Pin Number | Pin Name | Description |
| :---: | :---: | --- |
| 1 | RED/E+ | + Excitation |
| 2 | BLK/E- | - Excitation |
| 3 | WHT/A- | - Signal |
| 4 | GRN/A+ | + Signal |

### JP1 Jumper Settings

| Pin Configuration | Data Rate |
| :---: | --- |
| 1-2 | 80 Samples per Second (SPS) |
| 2-3 | 10 Samples per Second (SPS) |

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

- If you have any questions or need support, please contact <support@boardoza.com>

---

## License

Shield: [![CC BY-SA 4.0][cc-by-sa-shield]][cc-by-sa]

This work is licensed under a [Creative Commons Attribution-ShareAlike 4.0 International License][cc-by-sa].

[![CC BY-SA 4.0][cc-by-sa-image]][cc-by-sa]

[cc-by-sa]: http://creativecommons.org/licenses/by-sa/4.0/
[cc-by-sa-image]: https://licensebuttons.net/l/by-sa/4.0/88x31.png
[cc-by-sa-shield]: https://img.shields.io/badge/License-CC%20BY--SA%204.0-lightgrey.svg
