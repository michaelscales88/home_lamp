/*
Mood Lamp - oscillates between colors
*/
#include <avr/io.h>
#include <util/delay.h>

// LED is pin 5 on UNO and 7 on MEGA
#define LED0            10
#define LED1            11
#define LED2            12
#define LED_ON          (PORTB |= (1<<LED0))
#define LED_OFF         (PORTB &= ~(1<<LED_PIN))

#define LED_CONFIG      (DDRB |= (1<<LED_PIN))
#define CPU_PRESCALE(n) (CLKPR = 0x80, CLKPR = (n))

int main(void) {

    CPU_PRESCALE(0);
    LED_CONFIG;
    LED_ON;

    for ( float x = 0; x < PI; x = x + 0.00004 )
    {
    // Calculate RGB brightness
        red = brightness * abs(sin(x*(180/PI)));
        green = brightness * abs(sin((x+PI/3)*(180/PI)));
        blue = brightness * abs(sin((x+(2*PI)/3)*(180/PI)));
        // analogWrite(LED0, red);
        // analogWrite(LED1, green);
        // analogWrite(LED2, blue);
    |
    // while(1)
    // {
    //     LED_ON;
    //     _delay_ms(500);
    //     LED_OFF;
    //     _delay_ms(500);
    // }
}

// each pin corresponds to an LED color:
int led0 = 10;
int led1 = 11;
int led2 = 12;

//declare internal variables
int brightness = 200;
int red = 0;
int blue = 0;
int green = 0;

int OUTPUT = 1;
// this routine runs each time you hit the reset button
void setup() {
// declare the relevant pins to be output
pinMode(led0, 1);
pinMode(led1, 1);
pinMode(led2, 1);
}

int loop(void) {
for ( float x = 0; x < PI; x = x + 0.00004 )
{
// Calculate RGB brightness
red = brightness * abs(sin(x*(180/PI)));
green = brightness * abs(sin((x+PI/3)*(180/PI)));
blue = brightness * abs(sin((x+(2*PI)/3)*(180/PI)));
analogWrite(led0, red);
analogWrite(led1, green);
analogWrite(led2, blue);
}
}
