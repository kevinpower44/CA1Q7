#include "mbed.h"
#include "string.h"
#include <cstdio>
/*
Write an mbed OS program to toggle the LEDs with the intervals specified below.
LED1 - every 2 seconds
LED2 - every 5 seconds 
Share the github link to the program in the answer section below.
*/

DigitalIn buttn(PC_13);
DigitalOut led1(LED1);
DigitalOut led2(LED2);
Timer t;

int main()
{
     const()

    t.reset();
    t.start();
        if(t == 2){
            led1.write(1);
            led2.write(0);
        } else {
            led1 = 0;
            led2 = 1;
        }
               if(t == 5){
            led1.write(0);
            led2.write(1);
        } else {
            led1 = 1;
            led2 = 0;
        }
        t.reset();
    
    }while (1)
}
