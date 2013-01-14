/*
*  Test the CPU frequency.
*  Write estimated frequency to F_CPU 
*  and see if your LED blinks like expected
*/

  #define F_CPU 3686400UL

  #include <avr/io.h>
  #include <util/delay.h>

/* Define your Port/Pin here! */
  #define LED_PORT    PORTC
  #define LED_DDR     DDRC
  #define LED_PIN     PC0

  int main()
  {
    LED_DDR |= (1<<LED_PIN);

    while( 1 ) {
      LED_PORT ^= (1<<LED_PIN);
      _delay_ms(1000);
    }
  }
