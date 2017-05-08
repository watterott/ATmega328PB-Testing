# ATmega328PB Testing

## Hardware
* [Wattuino Pro Mini PB with ATmega328PB](http://www.watterott.com/en/Wattuino-pro-mini-PB-5V-16MHz)
* [Atmel/Microchip ATmega328PB Xplained Mini](http://www.watterott.com/en/Atmel-Xplained-Mini-Evalution-Kit)


## Software

### Installation on Arduino IDE 1.8+

1. The current avr-gcc toolchain (4.9.2-atmel3.5.3-arduino2) has not all files for the Atmega328PB.
  So you have to update the files in ```/arduino/hardware``` with the [files from this repository under hardware](https://github.com/watterott/ATmega328PB-Testing/raw/master/hardware.zip).

  The directory is located under Windows in ```/Program Files(x86)/Arduino/hardware```
  and under Mac in ```/Applications/Arduino/Contents/Java/hardware```

  *When in the future all files are included with the toolchain then this step can be skipped.*

2. Add the following URL to the Arduino Boards Manager (*File->Preferences*).
  ```
  https://github.com/watterott/ATmega328PB-Testing/raw/master/package_m328pb_index.json
  ```

3. Install the **ATmega328PB Boards** via the Boards Manager (*Tools->Boards->Boards Manager*).


## Further Infos
* Differences between ATmega328/P and ATmega328PB: http://www.atmel.com/Images/Atmel-42559-Differences-between-ATmega328P-and-ATmega328PB_Application%20Note_AT15007.pdf

* Another project/guide for the ATmega328PB: https://hackaday.io/project/9313-uino-mini-super-atmega328pb

* ATmega328PB Discussion in the Italian Arduino Forum: http://forum.arduino.cc/index.php?topic=374642.0

* ATmega328PB Support Request on GitHub: https://github.com/arduino/toolchain-avr/issues/36


## Known Issues
ATmega328P and ATmega328PB have different thresholds for reset.
This can be a problem when using a 5V power supply for the microcontroller and an USB serial adapter with 3.3V logic level on DTR.
* Reset Input Threshold Voltage (read as 0/low):
  * ATmega328P: 2.1V @ Vcc=5V
  * ATmega328PB: 1.6V @ Vcc=5V


## History / Contributions
* Patch v1.0.1 - Astrobeed, gpb01, PaoloP
* avr-gcc 4.9.2 for linux64 - sabas1080
* [All Pull Requests...](https://github.com/watterott/ATmega328PB-Testing/pulls?q=)
