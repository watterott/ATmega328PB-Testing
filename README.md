# ATmega328PB Testing


## Hardware
* [Wattuino Pro Mini PB 5V 16MHz (with ATmega328PB)](http://www.watterott.com/en/Wattuino-pro-mini-PB-5V-16MHz)
* [Wattuino Pro Mini PB 3.3V 8MHz (with ATmega328PB)](http://www.watterott.com/en/Wattuino-pro-mini-PB-3V3-8MHz)


## Software

### Installation on Arduino IDE 1.8+

1. Add the following URLs to the Arduino Boards Manager (*File->Preferences*).
   ```
   https://downloads.arduino.cc/packages/package_avr_3.6.0_index.json
   https://github.com/watterott/ATmega328PB-Testing/raw/master/package_m328pb_index.json
   ```

2. Update the **Arduino AVR Boards** to version **1.6.206** via the Boards Manager (*Tools->Boards->Boards Manager*).

3. Install the **ATmega328PB Boards** via the Boards Manager (*Tools->Boards->Boards Manager*).


## Further Infos
* Arduino AVR-GCC Toolchain with Atmega328PB support: https://github.com/arduino/toolchain-avr/pull/47

* Differences between ATmega328/P and ATmega328PB: http://www.atmel.com/Images/Atmel-42559-Differences-between-ATmega328P-and-ATmega328PB_Application%20Note_AT15007.pdf

* Another project/guide for the ATmega328PB: https://hackaday.io/project/9313-uino-mini-super-atmega328pb

* ATmega328PB Discussion in the Italian Arduino Forum: http://forum.arduino.cc/index.php?topic=374642.0


## Known Issues

### Timer 3+4 Output Compare
The output compare will only work if a 1 or 0 is written to the port register depending on the modulation.
Futher infos here: http://www.avrfreaks.net/comment/1717946#comment-1717946 and https://github.com/watterott/ATmega328PB-Testing/issues/29

### Reset
ATmega328P and ATmega328PB have different thresholds for reset.
This can be a problem when using a 5V power supply for the microcontroller and an USB serial adapter with 3.3V logic level on DTR.
* Reset Input Threshold Voltage (read as 0/low):
  * ATmega328P: 2.1V @ Vcc=5V
  * ATmega328PB: 1.6V @ Vcc=5V

### Crystal Oscillator
The ATmega328PB has no full-swing option for the oscillator.


## History / Contributions
* Patch v1.0.1 - Astrobeed, gpb01, PaoloP
* avr-gcc 4.9.2 for linux64 - sabas1080
* [All Pull Requests...](https://github.com/watterott/ATmega328PB-Testing/pulls?q=)
