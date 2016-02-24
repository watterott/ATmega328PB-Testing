# ATmega328PB Testing

## Hardware
* [Wattuino Pro Mini PB with ATmega328PB](https://github.com/watterott/wattuino#wattuino-pro-mini-pb)
* [ATmega328PB Xplained Mini](http://www.atmel.com/tools/MEGA328PB-XMINI.aspx)


## Software
The current Arduino avr-gcc toolchain (4.8.1) does not support the ATmega328PB.
To get support you can replace it with the below Atmel avr-gcc toolchain (4.9.2) and update the files in ```/arduino/hardware``` with the files from [this repository](https://github.com/watterott/ATmega328PB-Testing/archive/master.zip).

**Atmel Toolchain**
* Windows: http://www.atmel.com/tools/ATMELAVRTOOLCHAINFORWINDOWS.aspx

* Linux: http://www.atmel.com/tools/ATMELAVRTOOLCHAINFORLINUX.aspx

* Mac: http://distribute.atmel.no/tools/opensource/Atmel-AVR-GNU-Toolchain/3.5.0/

* ATmega Device Pack (ZIP-Archive, not needed): http://packs.download.atmel.com/Atmel.ATmega_DFP.1.0.91.atpack


**Another project/guide for the ATmega328PB:**

https://hackaday.io/project/9313-uino-mini-super-atmega328pb


**Differences between ATmega328/P and ATmega328PB**

http://www.atmel.com/Images/Atmel-42559-Differences-between-ATmega328P-and-ATmega328PB_Application%20Note_AT15007.pdf
