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
To get support you can replace it with the below avr-gcc toolchain (4.9.2 from Atmel or Arduino) and update the files in ```/arduino/hardware``` with the [files from this repository under hardware](https://github.com/watterott/ATmega328PB-Testing/raw/master/hardware.zip).

**Atmel Toolchain (GCC 4.9.2)**
* Windows: [Download](http://www.atmel.com/images/avr8-gnu-toolchain-installer-3.5.3.90-win32.any.x86.exe),
           [Infos/Overview](http://www.atmel.com/tools/ATMELAVRTOOLCHAINFORWINDOWS.aspx)

* Linux: [Download x86](http://www.atmel.com/images/avr8-gnu-toolchain-3.5.3.1700-linux.any.x86.tar.gz),
         [Download x64](http://www.atmel.com/images/avr8-gnu-toolchain-3.5.3.1700-linux.any.x86_64.tar.gz),
         [Infos/Overview](http://www.atmel.com/tools/ATMELAVRTOOLCHAINFORLINUX.aspx)

* Mac: [Download](http://distribute.atmel.no/tools/opensource/Atmel-AVR-GNU-Toolchain/3.5.3/avr8-gnu-toolchain-osx-3.5.3.460-darwin.any.x86_64.tar.gz),
       [Infos/Overview](http://distribute.atmel.no/tools/opensource/Atmel-AVR-GNU-Toolchain/3.5.2/)

* [Atmel Device Packs](http://packs.download.atmel.com)

**Arduino Toolchain (GCC 4.9.2)**
* Windows: [Download](http://downloads.arduino.cc/tools/avr-gcc-4.9.2-arduino4-i686-mingw32.zip)

* Linux: [Download x86](http://downloads.arduino.cc/tools/avr-gcc-4.9.2-arduino4-i686-pc-linux-gnu.tar.bz2),
         [Download x64](http://downloads.arduino.cc/tools/avr-gcc-4.9.2-arduino4-x86_64-pc-linux-gnu.tar.bz2)

* Mac: [Download](http://downloads.arduino.cc/tools/avr-gcc-4.9.2-arduino4-i386-apple-darwin11.tar.bz2)


## Further Infos
* Another project/guide for the ATmega328PB: https://hackaday.io/project/9313-uino-mini-super-atmega328pb

* Discussion in the Italian Arduino Forum: http://forum.arduino.cc/index.php?topic=374642.0

* Differences between ATmega328/P and ATmega328PB: http://www.atmel.com/Images/Atmel-42559-Differences-between-ATmega328P-and-ATmega328PB_Application%20Note_AT15007.pdf


## History / Contributions
* Patch v1.0.1 - Astrobeed, gpb01, PaoloP
* avr-gcc 4.9.2 for linux64 - sabas1080
* [All Pull Requests...](https://github.com/watterott/ATmega328PB-Testing/pulls?q=)
