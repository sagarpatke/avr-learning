/* Required by util/delay.h to calibrate delay time. */
#define F_CPU 8000000LU

#include<avr/io.h>
#include<util/delay.h>

int main() {
  uint8_t direction, position = 0x01;
  DDRE = 0xFF;
  PORTE = 0xFF ^ position;

  /* Make the program run indefinitely. */
  while(1) {
    if(position == 0x01) {
      direction = 0;
    } else if(position == 0x01<<7) {
      direction = 1;
    }
    if(direction) {
      position >>= 1;
    } else {
      position <<= 1;
    }
    PORTE = 0xFF ^ position;

    /* Delay will make the larson scanner noticeable to human eye. */
    _delay_ms(25);
  }
}
