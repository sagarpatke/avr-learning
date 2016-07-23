#include<avr/io.h>

int main() {
  /* Set Data Direction Register for all pins of port E to output. */
  /* 0 is INPUT, 1 is OUTPUT */
  DDRE = 0xFF;

  /* Turn off all LEDs on PORT E */
  /* 0 is ON, 1 is OFF.          */
  PORTE = 0xFF;

  /* Turn on first LED on PORT E, by flipping the bit. */
  PORTE ^= 0x01;

  /* Turn on fifth LED on PORT E, by flipping the bit. */
  PORTE ^= 0x01<<4;
}
