/**********************************************************************
 * Filename    : led.c
 * Description : Make an led blinking.
 * Author      : Robot
 * E-mail      : support@sunfounder.com
 * website     : www.sunfounder.com
 * Date        : 2014/08/27
 *********************************************************************/
#include <wiringPi.h>
#include <stdio.h>

#define  LedPin 5

int main(int argc, const char ** argv)
{
  if(wiringPiSetup() == -1){ /*when initialize wiring failed,print messageto screen*/
    printf("setup wiringPi failed !");
    return 1;
  }
    int i = 21;
    pinMode(i, OUTPUT);
    printf("linker LedPin : GPIO %d(wiringPi pin)\n", i); /*when initialize wiring successfully,print message to screen*/
    digitalWrite(i, LOW);
    printf("heater PIN on %d ...\n",i);
    delay(50);
    digitalWrite(i, HIGH);
    printf("...Heater PIN off %d \n",i);
    delay(50);
    pinMode(i, INPUT);
    return 0;
}
