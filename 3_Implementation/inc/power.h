/*
 * power.h
 *
 * Created: 19-04-2022 23:00:30
 *  Author: saivi
 */ 


#ifndef POWER_H_
#define POWER_H_

#include <avr/io.h>
#define F_CPU 1000000
#include <util/delay.h>
#include <stdlib.h>

#define enable            5
#define registerselection 6

void send_a_command(unsigned char command);
void send_a_character(unsigned char character);
void send_a_string(char *string_of_characters);





#endif /* POWER_H_ */