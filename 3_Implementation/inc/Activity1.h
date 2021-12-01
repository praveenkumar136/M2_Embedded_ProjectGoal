#ifndef ACTIVITY1_H_INCLUDED
#define ACTIVITY1_H_INCLUDED

#define F_CPU 16000000UL
#define LED_PORT (PORTB)
#define LED_PIN  (PORTB0)
#define BUTTON_SENSOR  (PORTD0)
#define TEMP_SENSOR  (PORTD1)
#include <util/delay.h>
#include <avr/io.h>




void peripheral_init(void);

void TurnLED_ON();


void TurnLED_OFF();


int activity1_LED(void);


#endif // ACTIVITY1_H_INCLUDED
