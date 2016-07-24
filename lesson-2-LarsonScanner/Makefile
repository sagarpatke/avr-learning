build: clean
	avr-gcc -mmcu=atmega128 -Os larson-scanner.c -o larson-scanner.o
	avr-objcopy larson-scanner.o larson-scanner.hex
clean:
	rm -f *.hex *.o
fuse:
	avrdude -p atmega128 -P /dev/ttyUSB0 -c stk500 -U lfuse:w:0xe4:m -U hfuse:w:0x99:m -U efuse:w:0xfd:m
deploy: build
	avrdude -p atmega128 -P /dev/ttyUSB0 -c stk500 -U lfuse:w:0xe4:m -U hfuse:w:0x99:m -U efuse:w:0xfd:m -U flash:w:larson-scanner.hex
