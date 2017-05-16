/*
 Mood Lamp - oscillates between colors
 */
#include "config.h"

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

void loop() {
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
