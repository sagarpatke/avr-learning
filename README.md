# Learning AVR Microcontroller Programming
All of my effort learning Microcontroller programming is documented in this repository.

## My Inventory:
- __EasyAVR M128 SK V2__ microprocessor with __ATMEGA128L__ microcontroller

## Resources:
- [Atmega128L Manual](http://www.atmel.com/images/doc2467.pdf)
- [EasyAVR M128 SK V2 - User Guide](http://www.ekt2.com/pdf/412_CH_EASYAVR_ATMEGA128.pdf)
- [Fuse Calculator](http://www.engbedded.com/fusecalc/)

## My Environment:
- Debian Stretch (testing at the time of commit)

## Setup Dev Environment:
```shell
$ sudo apt-get install avr-gcc avrdude avr-libc make
```

## Configure Microcontroller FUSE
Connect power source to the microprocessor, and connect the STK500 ISP to USB, and run the following commands to program the Fuse. For example, to program the fuse to `-U lfuse:w:0xe4:m -U hfuse:w:0x99:m -U efuse:w:0xfd:m`, run
```shell
$ sudo avrdude -p atmega128 -P /dev/ttyUSB0 -c stk500 -U lfuse:w:0xe4:m -U hfuse:w:0x99:m -U efuse:w:0xfd:m
```
