build: clean
	avr-gcc -mmcu=atmega128 hello.c -o hello.o
	avr-objcopy hello.o hello.hex
clean:
	rm -f *.hex *.o
deploy: build
	avrdude -p atmega128 -P /dev/ttyUSB0 -c stk500 -U lfuse:w:0xe4:m -U hfuse:w:0x99:m -U efuse:w:0xfd:m -U flash:w:hello.hex
