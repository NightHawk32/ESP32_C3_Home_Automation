#include "board.h"
#include "myWifi.h"
#include <WiFi.h>
#include <time.h>

bool ledState = LED_OFF;
bool outcha1State = OUT_OFF;

void setup()
{
    pinMode(PIN_LED, OUTPUT);
    digitalWrite(PIN_LED, LED_OFF);
    pinMode(OUT_CH1, OUTPUT);
    digitalWrite(OUT_CH1, OUT_OFF);
    delay(500);
    Serial.begin(115200);

    Serial.println("Starting ....");
    delay(1000);
    
}


void loop()
{
    ledState = !ledState;
    digitalWrite(PIN_LED, ledState);
    outcha1State = !outcha1State;
    digitalWrite(OUT_CH1, outcha1State);
    Serial.println("blink!");
    delay(1000);  
}