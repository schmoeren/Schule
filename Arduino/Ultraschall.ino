#include <controller.h>
#include <delay.h>
#include <lcd.h>

const int trigger=8;
const int echo=9;
    
void setup() 
{
    lcd_init();
    lcd_clear();
    pinMode(trigger, OUTPUT); 
    pinMode(echo, INPUT);

}

void loop() 
{
    uint16_t distance;
    triggerimpuls();
    distance=echo_read();
    lcd_int(distance);
    lcd_setcursor(1,1);
}

uint16_t echo_read()
{
     uint16_t zeit=pulseIn(echo, HIGH);
     uint8_t distance=(0,01715*(zeit/2));   //Schallgeschwindigkeit schon umgerechnet, von 0,034300 / 2
     return distance;
}

void triggerimpuls()
{
    digitalWrite(trigger, LOW);
    delayMicroseconds(5);
    digitalWrite(trigger, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigger, LOW);
}
