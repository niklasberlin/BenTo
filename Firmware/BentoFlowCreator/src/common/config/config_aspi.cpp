#include "config_aspi.h"
#include <Arduino.h>
#include "../DebugHelpers.h"

int ledIndexMap[LED_COUNT];

void generateLedIndexMap()
{
    for(int i=0;i<LED_COUNT;i++)
    {
        int sIndex = (i%NUM_STRIPS)*STRIP_LED_COUNT;
        int indexOnStrip = (int)floorf(i/NUM_STRIPS);
        if(i%2 == 0) indexOnStrip = STRIP_LED_COUNT - 1 - indexOnStrip;
        sIndex += indexOnStrip;
        ledIndexMap[i] = sIndex;

        DBG("Led at index : "+String(i)+" > "+String(ledIndexMap[i]));
    }
}

int getLedAtIndex(int index)
{
    return ledIndexMap[index];
}