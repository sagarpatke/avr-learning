# Lesson 1: Hello
## Introduction
This lesson teaches us to write a program, that turns on the first and fifth LEDs connected to PE of microprocessor.

## Prerequisites
- Should know C Programming
- Should know [Bitwise Operations in C](http://www.programiz.com/c-programming/bitwise-operators)

## Compile and flash
```shell
$ avr-gcc -mmcu=atmega128 hello.c -o hello.o
$ avr-objcopy hello.o hello.hex
$ sudo avrdude -p atmega128 -P /dev/ttyUSB0 -c stk500 -U flash:w:hello.hex
```
