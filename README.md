# ATmega328PB Testing

## Hardware
* [Wattuino Pro Mini PB with ATmega328PB](http://www.watterott.com/en/Wattuino-pro-mini-PB-5V-16MHz)
* [Atmel ATmega328PB Xplained Mini](http://www.watterott.com/en/Atmel-Xplained-Mini-Evalution-Kit)


## Software

### Boards Package
Add the following URL to the Arduino Boards Manager (*File->Preferences*):
```
https://github.com/watterott/ATmega328PB-Testing/raw/master/package_m328pb_index.json
```
and install the *ATmega328PB Boards* via the Boards Manager (*Tools->Boards->Boards Manager*).

### Manual Installation
The current Arduino avr-gcc toolchain (4.8.1) does not support the ATmega328PB.
To get support you can replace it with the below Atmel avr-gcc toolchain (4.9.2) and update the files in ```/arduino/hardware``` with the files from [this repository](https://github.com/watterott/ATmega328PB-Testing/archive/master.zip).

**Atmel Toolchain**
* Windows: http://www.atmel.com/tools/ATMELAVRTOOLCHAINFORWINDOWS.aspx

* Linux: http://www.atmel.com/tools/ATMELAVRTOOLCHAINFORLINUX.aspx

* Mac: http://distribute.atmel.no/tools/opensource/Atmel-AVR-GNU-Toolchain/3.5.1/


## Further Infos
* Another project/guide for the ATmega328PB: https://hackaday.io/project/9313-uino-mini-super-atmega328pb

* Discussion in the Italian Arduino Forum: http://forum.arduino.cc/index.php?topic=374642.0

* Differences between ATmega328/P and ATmega328PB: http://www.atmel.com/Images/Atmel-42559-Differences-between-ATmega328P-and-ATmega328PB_Application%20Note_AT15007.pdf


## History / Contributions
Patch v1.0.1 17/03/2016 - modified and debugged by Astrobeed, gpb01, PaoloP.
