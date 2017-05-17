#include <avr/io.h>
#include <util/delay.h>

#define LED0                10
#define LED1                11
#define LED2                12
#define PI                  3.14159265359
#define BLINK_DELAY_MS      1000
#define CPU_PRESCALE(n)     (CLKPR = 0x80, CLKPR = (n))
#define BRIGHTNESS          1

float red;
float green;
float blue;
float x;

int main (void)
{
    /* set pin 5 of PORTB for output*/
    DDRB |= _BV(DDB5);
    x = 1;
    while(1)
    {
        red = BRIGHTNESS * abs(sin(x*(180/PI)));
        green = BRIGHTNESS * abs(sin((x+PI/3)*(180/PI)));
        blue = BRIGHTNESS * abs(sin((x+(2*PI)/3)*(180/PI)));
        /* set pin 5 high to turn led on */
        PORTB |= _BV(PORTB5);
        _delay_ms(BLINK_DELAY_MS);

        /* set pin 5 low to turn led off */
        PORTB &= ~_BV(PORTB5);
        _delay_ms(BLINK_DELAY_MS);

        // analogWrite(LED0, red);
        // analogWrite(LED1, green);
        // analogWrite(LED2, blue);
    }
}
